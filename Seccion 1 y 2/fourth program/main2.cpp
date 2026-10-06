#include <iostream>

void Print(int count,char ch){
    for (int i=0;i<count;i++){
    std::cout << ch;
    }
    std::cout << std::endl;
}

void EndMessage(){
    std::cout << "Program finish" << std::endl;
}

int main(){
    Print(5,'#');
    void (*pfn)(int,char)=Print;
    (*pfn)(8,'@');
    pfn(5,'+');
    atexit(EndMessage); //it can be at the end or the beggining
    return 0;
}

