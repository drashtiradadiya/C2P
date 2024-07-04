#include<iostream>
using namespace std;
void swap(int *x,int *y ){
    int d;
    int tamp;
    tamp=*x;
    *x=*y;
    cout<<*x<<endl<<x<<endl;
    *y=tamp; 
     cout<<*y<<endl<<y;
}

int main(){
    cout<<"call by Address"<<endl;
    int a=10;
    int b=20;
    cout<<&a<<endl<<&b<<endl;
    
    swap(&a,&b);
    return 0;
}
