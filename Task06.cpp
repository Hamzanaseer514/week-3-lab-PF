#include<iostream>
using namespace std;
main(){
string name;
float matricmarks;
float intermediatemarks;
float ecatmarks;
float aggregate;
cout<<" Enter name :";
cin>>name;
cout<<" Enter matric marks :";
cin>>matricmarks;
cout<<" Enter intermediate marks :";
cin>>intermediatemarks;
cout<<" Enter Ecat marks :";
cin>>ecatmarks;
aggregate = (matricmarks/1100)*10 + (intermediatemarks/550)*40 + (ecatmarks/400)*50;
cout<<" Name : "<<name<<endl;
cout<<" Your aggregate is :"<<aggregate;
}