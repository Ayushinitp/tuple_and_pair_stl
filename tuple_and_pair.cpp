
//pair and tuple
//pairr is not a class .it is  a structure made with the help of tempelate
#include <iostream>
#include <utility>
#include <tuple>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int>v1={10,20,30,40,50,60,70,80};
    string n1="Ayushi";
    pair<string,vector<int>>p1;
    //How to put data inside pair
    //1.make_pair
    p1=make_pair(n1,v1);
    pair<int,string>p2={1,"Patna"};
    pair<int,int>p3={10,20};

    //How to access pair elemnts
    cout<<p1.first<<" ";
    for(auto x:p1.second)
    cout<<x<<" ";
    cout<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;


    //tuple
//tuple me zero basedd counting hhai
tuple<int,double,char>t={1,2.4,'a'};
tuple<int,string,char>t1={1,"ayushi",'a'};
tuple<int,string,string>t2;
t2=make_tuple(3,"ayushi","riya");
//how to access tuple
cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<endl;



}













