#Project_6

##main.cpp
```
int main function
  create file input stream based on the data file
  create varibales intA, intB, text
  create temp variables for the integer varibales
  if the file successfully opens
    loop through the file each line until finished
    for ecah line
      read until first comma into temp string sIntA
      read until second comma into temp string sIntB
      read rest of line into text variable
      clear the stringstream
      put the temp strngs into the stringstream seperated by a space
      print the remaining string the amount of tiimes by the added integers
  close file after loop
  return 0;
    
```
