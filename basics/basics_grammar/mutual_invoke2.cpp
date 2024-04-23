#include <iostream>
 
extern int count; // external variable invoke

void write_extern(void)
{
   std::cout << "Count is " << count << std::endl;
}

// if not have usenamespace std, it is necessary to use std:: before cout;