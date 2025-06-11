#include<iostream>
using namespace std;
int main(){
    int i,j;
    cin>>i>>j;
    double area=(double(i)*double(j))/2;
    cout<<"Triangle area:"<<fixed; cout.precision(1); cout<<area<<endl;
}
