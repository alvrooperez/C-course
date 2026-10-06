#include <iostream>



int main() {

    int arr [5]{1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] ;
    }   
    std::cout << std::endl;
    for (const auto & x : arr) {
        //x=3; //if it is a const reference, it cannot be modified
        std::cout << x ;
    }
    std::cout << std::endl;
  
    for (auto x : {1, 2, 3, 4, 5}) {
        std::cout << x ;
    }
    std::cout << std::endl;


    // With pointers
    
    int *beg = std::begin(arr); //or int *beg = arr; or int *beg = &arr[0];
    int *end = std::end(arr); //or int *end = ptr + 5; ?
    // From here 
    auto range = arr; //shoulkd be  auto &&range = arr; for using with std::begin and std::end
    auto begin = std::begin(arr);
    auto end = std::end(arr);

    for (;begin != end; begin++) {
        auto v = *begin ;
    }
    // to here, the same as the for loop above

    while (beg != end) {
        std::cout << *beg ;
        beg++;
    }

    std::cout << std::endl;
}