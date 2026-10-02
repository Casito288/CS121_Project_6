#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

int main(){

  // declaring ifstream input file variable and opening file
  std::ifstream inFile;
  inFile.open("data.csv");

  // declaring needed variables for reading,
  // convering, and adding values for desired output
  std::string currentLine, text, tempA, tempB;
  std::stringstream ss, converter;
  int intA, intB, total;
  
  bool keepGoing = true;
  while(getline(inFile, currentLine)){
    // clearing the stringstreams
    ss.clear();
    ss.str("");
    converter.clear();
    converter.str("");

    ss.str(currentLine);

    // reding temp and text as strings
    // specifying a comma delimiter
    getline(ss, tempA, ','); // reading fisrt value
    getline(ss, tempB, ','); // reading second value
    getline(ss, text); // reading rest of line

    // converting string to int
    converter << tempA; // sending value of tempA to converter stream
    converter >> intA; // sending converter stream to intA integer

    // clearing converter stream again
    // because of the first value and comma
    converter.clear();
    converter.str("");

    converter << tempB;
    converter >> intB;

    // adding the converted integers
    total = intA + intB;
    
    // printing the remainder of the line (text)
    // the amount of times by the added integers
    for(int i = 0; i < total; i ++){
      std::cout << text;
    } // end for
    std::cout << std::endl;
  } // end while
  inFile.close(); // closing file

  return 0;
} // end main
