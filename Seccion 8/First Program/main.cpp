#include <iostream>
//enum Color{RED,GREEN,BLUE};
enum class Color{RED,GREEN,BLUE};
void FillColor (Color color){
    if (color==Color::RED){
        std::cout << "RED"<<std::endl;
    } else if (color==Color::GREEN){
        std::cout << "GREEN"<<std::endl;
    }else if (color==Color::BLUE){
        std::cout << "BLUE"<<std::endl;
    }else {
        std::cout << "None color"<<std::endl;
    }
    

}
//enum TrafficLight{RED,GREEN,YELLOW}; // Can't no be redefined the colors
// for changing that you can use enum scope?
enum class TrafficLight: char{RED='c',GREEN,YELLOW};
//better use scope enums
int main () {
    Color c =Color::RED;
    FillColor(c);
    FillColor(Color::GREEN);
    //FillColor (6); //Not posible
    FillColor(static_cast<Color>(2));  //It referes to the 0,1,2 = 2=Blue
    //int x = Color::RED;
    int x = static_cast<int>(Color::RED);
    return 0;
}