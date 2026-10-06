#pragma once
class Integer {
    int *m_pInt;
public:
    //Default Const
    Integer();
    //Parameterized Const
    Integer(int value);
    //Copy Const
    Integer(const Integer &obj);
    //Move Const
    Integer(Integer &&obj);
    //Copy assignment
    Integer & operator= (const Integer &obj);
    //Move assignment
    Integer & operator= (Integer &&obj);
    int GetValue()const;
    void SetValue(int value);
    ~Integer();

};