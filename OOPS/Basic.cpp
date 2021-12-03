# include <iostream>
using namespace std;

class student{
    // by default data members are private in c++
    string name;

    public:
    int age;
    bool gender;

    // default constructors
    student(){
        cout<<"default constructor"<< endl;
    }

    // parameterized constructor
    student(string s, int a, bool g){
        name=s;
        age=a;
        gender=g;
    }

    // copy constructor
    student(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    // since name is private init get & set
    void setName(string s){
        name=s;
    }
    string getName(){
        return name;
    }
    void printInfo(){
        std::cout << "Name: "<<name << std::endl;
        std::cout << "Age: "<<age << std::endl;
        (gender)?cout<<"Gender: Male\n":cout<<"Gender: Female\n";
    }

    // destructor in c++
    // ~student(){
    //     std::cout << "Destructor called" << std::endl;
    // }
};

int main(int argc, char const *argv[])
{
    student s1("kaushal",10,true);
    student s2;

    s2=student(s1);
    s1.printInfo();
    s2.printInfo();
    return 0;
}
