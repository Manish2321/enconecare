#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"yes"<<endl;
       
    }
     void show(){
            cout<<"show"<<endl;
        }
};
    class derived: public base{
        public:
        void print(){
             cout<<"print";
        }
        void show() {cout<<"ans";}
    };


int main(){
 base* res;
 derived d;
 res = &d;
 res->print();
 res->show();
 
}