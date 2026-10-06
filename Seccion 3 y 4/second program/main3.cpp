#include <iostream>

class Integer {
    int m_Value{0};
public:

/*  //We don't need it
    Integer(){
        m_Value =0;
    }
     //   But should do:
*/
    Integer()=default;
    Integer(int value){
        m_Value =value;
    }

    Integer(const Integer &)=delete; // Disallow to use that function
    void SetValue (int value){
        m_Value=value;
    }
    void SetValue (float value)= delete; //Disallow to use float with SetValue
};

int main(){
    Integer i1;
    Integer i2(3);
    //Integer i3(i1); //error
    //i2.SetValue(4f) //error float value disallow
    return 0;

}