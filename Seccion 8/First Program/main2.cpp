#include <iostream>
#include <cstring>
#include <string>
const char * Combine ( const char *pFirst, const char *pLast){
    char *fullname= new char[strlen(pFirst)+strlen(pLast)+1] ;
    strcpy(fullname,pFirst);
    strcat(fullname,pLast);
    return fullname;
}

int main (){
    /*
    char first [10];
    char last [10];
    std::cin.getline(first,10);
    std::cin.getline(last,10);

    const char *pFullName = Combine(first,last);
    std::cout << pFullName <<std::endl;
    delete[] pFullName;
    */
   std::string first;
   std::string last;

   std::getline(std::cin,first);
   std::getline(std::cin,last);
   std::string fullname=first + " " + last;
   std::cout << fullname <<std::endl;

   printf("%s",fullname.c_str()); // for using with c
    using namespace std::string_literals;
   auto n2 = "Umar Lone"s;
   return 0;
   
}

void UsingStdString(){
     //Initialize assign
    std::string s ="Hello";
    s= "Hello";
    //access
    s[0]='W';
    char ch=s[0];
    std::cout<<s << std::endl;
    std::getline(std::cin,s);
    //size
    s.length();
    //Insert & concanate
    std::string s1{"Hello"}, s2 {"World"};
    s=s1+s2;
    s+=s1;
    s.insert(6,s2);
    //Comparision
    if (s1==s2){  // or < > !=

    }
    //removal
    //s.clean(); //or s.erase();
    s.erase(0,4);
    // Search
    auto pos= s.find("World",0); // Where you start
    if (pos != std::string::npos){
        //Found
    }

    // String is like a class with its operators
}