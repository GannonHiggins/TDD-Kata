#ifndef FIZZ_HPP
#define FIZZ_HPP

#include <string>


std::string FizzBuzz(std::string number){
int buffer;

std::string buf;
buffer = std::stoi(number);
if(number == "0"){
   return "0";
}

if (buffer == 3 || buffer % 3 == 0 ){
      buf = "Fizz";
   return buf;
}

if(buffer == 5 || buffer%5 == 0 ){

   buf = "Buzz";
   return buf;
}


   return number; 
}


#endif 
