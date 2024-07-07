#include<iostream>
using namespace std;

class Hero {
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
       Hero() {
        cout << "Simple constructor " << endl;
       }
};
int main(){
     Hero a;

    //Dynamic
    Hero *b = new Hero();
    

return 0;
}