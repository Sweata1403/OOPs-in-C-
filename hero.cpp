//access modifier

#include<iostream>
using namespace std;

class Hero{
    //properties

    public:
    int health;
    private:
    char level;
    
    void print(){
        cout<<level<<endl;
    }
};

int main(){
    //creating a object
    Hero Ramesh;
    Ramesh.health=70;
    cout<<"health is: "<<Ramesh.health<<endl;
    // cout<<"level is:"<<Ramesh.level<<endl;    
    return 0;
}