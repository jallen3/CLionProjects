#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
//FIXME: stream manipulation library
using namespace std;

int main()
{

// 1. Prompt the user for a title for data. Output the title.
    cout<< "Enter a title for the data:" << endl;
    string dataTitle;
    getline(cin, dataTitle);
    if(dataTitle != "")
        cout<< "You entered: " << dataTitle << endl << "\n";

  // 2. Prompt the user for the headers of two columns of a table. Output the column headers
    cout<< "Enter the column 1 header: " << endl;
    string c1Header;
    getline(cin, c1Header);
    if(c1Header != "")
        cout<< "You entered: " << c1Header << endl << "\n";

    cout<< "Enter the column 2 header: " << endl;
    string c2Header;
    getline(cin, c2Header);
    if(c2Header!= "")
    cout<< "You entered: " << c2Header << endl << "\n";

    // 3. Prompt the user for data points. Data points must be in this format: string, int.
    //    Store the information before the comma into a string variable and the information after the comma into an
    //    integer. The user will enter -1 when they have finished entering data points. Output the data points.
    //    Store the string components of the data points in a vector of strings. Store the integer components of the
    //    data points in a vector of integers.


    string userInput; //All of user input
    string comma = ",";
    int number;
    vector<string> stringData;
    vector<int> intData;

while(userInput != "-1") {
    cout<< "Enter a data point (-1 to stop input): " << endl;
    getline(cin, userInput);
    if(userInput == "-1"){
        break;
    }
    //ALWAYS catch most specific to least specific
    try {
        if(userInput.find(comma) == std::string::npos) {
            throw(userInput); // will stop code if there's an error
        }
        unsigned int commaTest = userInput.find(comma);
        if(userInput.find(comma,commaTest + 1) != std::string::npos){
            throw(commaTest);
        }

        std::string stringInput = userInput.substr(0, userInput.find(comma));
        string intInput = userInput.substr(stringInput.length() + comma.length());

        

        number = stoi(intInput); //changing number portion of string to int data type
        intData.push_back(number);
        stringData.push_back(stringInput);
        cout << "Data String: " << stringData[stringData.size() - 1] << endl; //String portion of user input
        cout << "Data Integer: " << intData[intData.size() - 1] << endl; //int portion of user input
    }
    //catch displays the error message
    catch(string userInput) {
        cout << "Error: No comma in string." << endl;
    }
    catch(unsigned int commaTest){
        cout << "Error: Too many commas in input." << endl;
    }
    catch(...){
        cout << "Error: Comma not followed by an integer." << endl;
    }

}


// 5. Output the information in a formatted table. The title is right justified with a setw() value of 33.
// Column 1 has a setw() value of 20. Column 2 has a setw() value of 23.
//      setw('col. width) << align "left" or "right" << 'variable name' << endl;
//       use 'unsigned int i' when working with for loops for vectors

cout << setw(33) << right << dataTitle << endl;
cout << setw(20) << left << c1Header << "|" << setw(23) << right << c2Header << endl;
cout <<  "--------------------------------------------" << endl;
for(unsigned int i = 0; i < stringData.size(); i++) {
    cout << setw(20) << left << stringData[i] << "|";
    cout << setw(23) << right << intData[i] << endl;

}

// Output the information as a formatted histogram. Each name is right justified with a setw() value of 20
for(unsigned int i =0; i < stringData.size(); i++){
    cout << setw(20) << right << stringData[i] << " ";
    for(int j = 0; j < intData[i]; j++){
        cout << "*";
    }
    cout << endl;
}









    return 0;
}

//Perform error checking for the data point entries. If any of the following errors occurs,
// output the appropriate error message and prompt again for a valid data point.
// For the checking whether the entry after the comma is an integer or not, you will have to use
// try/catch blocks with the stoi function