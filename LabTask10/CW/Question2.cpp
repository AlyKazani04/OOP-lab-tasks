#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Application{
    private:
        string filename = "Database.txt";
        fstream file;
        int id;
        string name;
        string designation;
        int years;
    public:
        Application(){}
        void addPerson(){}
        void display(){}
        void updatePerson(){}
        void deletePerson(){}
};

int main(){

    return 0;
}