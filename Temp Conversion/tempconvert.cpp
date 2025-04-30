//Farenheit to Celsius Converter
#include <iostream>

int main() {

    double tempf;    
    double tempc;
        
    //Gets current temperature in Farenheit
    std::cout << "What is the current temperature in Farenheit: \n";
    std::cin >> tempf;

    //Converts temperature to Celsius and displays in terminal
    tempc = (tempf - 32) / 1.8;
    std::cout << "The current temperature in Celsius is " << tempc << "\n";

    return 0;
    
}