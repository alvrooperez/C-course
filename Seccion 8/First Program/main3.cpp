#include <iostream>
#include <sstream>

int main(){
    int a {5}, b{6};
    int sum = a+ b;
    
    //std::string output = "Sum of " + a + " &" + b + "is " + sum;
    std::stringstream ss;

    ss << "Sum of "<< a << " & "<< b << " is " << sum << std::endl;
    std::string s =ss.str();
    std::cout << s << std::endl;
    ss.str("");
    ss << sum;
    //auto ssum =ss.str();
    auto ssum= std::to_string(sum);
    std::cout << ssum<< std::endl;

    std::string data = "12 23 45";
    int c;
    std::stringstream ss2;
    ss2.str(data);
     while (ss2 >> c){// !ss2.fail()
        ss2 >> c;
        std::cout << "Number " << c << std::endl;

     }
    //std::stringstream is;
    //std::ostringstream os;
    int x =std::stoi("54");

}