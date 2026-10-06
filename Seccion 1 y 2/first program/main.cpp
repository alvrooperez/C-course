// Single line comment
/*  This is a multi-line comment */
#include <iostream>

int main() {
    using namespace std;
    // Instead of using std::cout, we can use cout directly after the using directive, better no to do it

    cout << "Hello "<< " C++" << endl;

    return 0;

}

// compile with: g++ -std=c++20 main.cpp -o app
// run with: .\app for linux use ./app
