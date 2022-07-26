#include <string>
#include <iostream>

enum Color
{
    black,      //assigned 0
    red,        //assigned 1
    blue,       //assigned 2
    green,      //assigned 3
    white,      //assigned 4
    cyan,       //assigned 5
    yellow,     //assigned 6
    magenta,    //assigned 7
};
std::string printColor(Color color)
{
    if (color == black)std::cout << "black";
    else if (color == red)std::cout << "red";
    else if (color == blue)std::cout << "blue";
    else std::cout << "???";
}
int main()
{   
    std::string color;
 
    std::cout << "your shirt is " << color <<'\n';
    return 0;
}


