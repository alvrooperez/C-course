#include <iostream>
#include <vector>
int main(){
    int arr[10];
    int *ptr = new int [10];
    for (int i=0; i<10;i++){
        ptr[i]=i*10;
    }

    std::vector<int> data{1,2,3};
    for (int i=0;i<5;i++){
        data.push_back(i*10);
    }
    // Access
    data[100];
    /*
    for (int i=0;i<data.size();i++){
        std::cout<<data[i]<<" ";

    }
    std::cout<<std::endl;
    */
    for (auto x: data){
        std::cout<<x<<" ";
    }
    auto it=data.begin();
    std::cout<<std::endl;
    std::cout<<*it;
    std::cout<<std::endl;
    it++;
    it--;
    it=it+5;
    //Delete
    data.erase(it);
    
    // Insert
    it=data.begin()+5;

    data.insert(it,500);
    for (auto x: data){
        std::cout<<x<<" ";
    }
    return 0;
}