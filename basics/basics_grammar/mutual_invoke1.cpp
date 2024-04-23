#include <iostream>

int count ;

extern void write_extern();
 
int main()
{
   count = 5;
   write_extern();
}

// g++ main.cpp support.cpp -o write 