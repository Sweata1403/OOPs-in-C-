//access modifier

#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    //creating a objectj
    Hero Ramesh;
    cout<<"Ramesh health: "<<Ramesh.getHealth()<<endl; 
    //use setter
    Ramesh.setHealth(70);
    Ramesh.level='A';

    cout<<"health is: "<<Ramesh.getHealth()<<endl;
    // cout<<"level is: "<<Ramesh.setLevel()<<endl;
    return 0;
}