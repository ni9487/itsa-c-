#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cin>>i>>j>>k;
    double area=((double(i)+double(j))*double(k))/2;
    cout<<"Trapezoid area:"<<fixed; cout.precision(1); cout<<area<<endl;
}
