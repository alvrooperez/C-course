#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void Malloc(){

    int *p = (int*) malloc(5* sizeof(int)); 
    *p=5;
    int *p2 = (int*) calloc(1,sizeof(int)); //initialized memory to 0
    *p2=5;
    if (p==NULL){
        printf("Failed to allocate memory");
        return ;
    }
    printf("%d",*p);
    free(p); // if don't free-> memory leak
    p=NULL; //when free a memory you should assign NULL to the pointer

}

void New (){
    int *p = new int;
    *p=6;
    std::cout << *p << std::endl;
    delete p;
    p=nullptr;

}

void NewArray(){
    int *p = new int [5]; //we can use also {1,2,3,4,5}-> initialized
    for (int i=0; i<5;i++){
        p[i]=i;
    }
    delete []p;
}

void Strings (){
    char *p =new char [4]; // one more byte for null or something like that
    strcpy_s(p,4,"C++");
    std::cout<< p << std::endl;
}

void TwoD(){
    int *p1 = new int [3];
    int *p2 = new int [3];
    
    int **pData = new int *[2];
    pData[0]=p1;
    pData[1]=p2;

    pData[0][1]=5;
    std::cout << pData[0][1]<< std::endl;

    delete []p1;
    delete []p2;
    delete [] pData;
}

int main ( ){
    int data[2][3]={
        1,2,3,
        4,5,6
    };

    std::cout << data[0][1]<< std::endl;


    New();
    NewArray();
    Strings();
    return 0;
}