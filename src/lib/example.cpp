#include "lib/example.h"
#include "lib/printer.h"
#include <string>

void Example::say_hello()
{
    Printer printer;    
    std::string s("Hello World");
    printer.print(s);
}