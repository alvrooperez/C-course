#include <iostream>

class Zip final {
public:
    Zip() { }
    void Compress(const std::string &filename) {  }
    void Decompress(const std::string &filename) {  }
    void PrintStatistics() {  }
    ~Zip() {
        //release resources
    }
};
/*
class FastZip : public Zip {

};
*/
//Because it has final can't be inheritized

#pragma region Override
class Document {
public:
    virtual void Serialize(float version) {
        std::cout << "Document::Serialize" << std::endl;
    }
};

class Text : public Document {
public:
    void Serialize(float version) override final{
    //void Serialize(int version) override{
        //if you put override and it is bad implemented or isn't virtual it will show us as an error
        //if you add final it can't be overrided by others
        std::cout << "Text::Serialize" << std::endl;
    }
};
class RichText : public Text{
public:
/*
    void Serialize(float version)override{ // It can't be overrided because of the final of Document class
        std::cout << "RichText::Serialize" << std::endl;
    }
*/
};
#pragma endregion


int main() {
    Text t;
    Document &doc =t; 
    doc.Serialize(1.2f); //because Serialize hasn't been good implemented it will use the original one 
    return 0;
}
