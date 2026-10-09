#include <iostream>
#include<string>
using namespace std;
class student{
    public:
        string name;
        string id;
        student(string n, string i ){

            name= n;
            id=i;

        }
    void getinfo(){
        cout<< "name "<<name<<endl;
        cout<<" id "<<id<<endl;


    };



};

int main()
{
   student s1("Talha","F2025065307");
   s1.getinfo();
   student s2(s1);
   (s2.id)="f2025065239";
   s2.getinfo();
    return 0;
}