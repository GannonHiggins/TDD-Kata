#ifndef FIZZ_HPP
#define FIZZ_HPP

#include <string>


std::string FizzBuzz(std::string number){
int buffer;

std::string buf;
buffer = std::stoi(number);

if (buffer == 3){
      buf = "Fizz";
   return buf;
}

if(buffer == 5){

   buf = "Buzz";
   return buf;
}


   return number; 
}


#endif 
