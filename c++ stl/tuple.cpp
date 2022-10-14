#include<bits/stdc++.h>
using namespace std;

int main(){
    tuple <int ,char ,float,int> tup1(1,'d',3.2,3); //DECLARING ANY TUPLE ALONG WITH VALUES 
    cout<<get<0>(tup1)<<endl;  //USING get() to acess any tuple 
    get<2>(tup1)=8.0;
    cout<<get<2>(tup1)<<endl;
    cout<<tuple_size<decltype(tup1)>::value<<endl;
    tuple <int ,char ,float ,int>tup2;
    tup2=make_tuple(5,'r',5.3,6); //to initialize vlaue to a tuple 
    cout<<get<1>(tup2)<<endl;
    tup1.swap(tup2);   //to swap two tuples with same data types 
    cout<<get<0>(tup2)<<endl;

//usig tie without and with ignore
    tuple <int ,float,char>tup3(5,2.5,'w');
    int i_tup;
    float f_tup;
    char c_tup;
    tie(i_tup,f_tup,c_tup)=tup3;
    cout<<i_tup<<endl;
    cout<<f_tup<<endl;
    cout<<c_tup<<endl;
    tuple <int ,float ,char >tup4(3,3.3,'f');
    int i_tup4;
    char c_tup4;
    tie(i_tup4,ignore,c_tup4)=tup4;
    cout<<i_tup4<<endl;
    cout<<c_tup4<<endl;

//using tuple_cat(tuple1,tuple2) to concatenate two tuples and make a new tuple 
    auto tup12= tuple_cat(tup1,tup2,tup3);
    cout<<get<0>(tup12)<<" "<<get<1>(tup12)<<endl;
    cout<<get<2>(tup12)<<" "<<get<3>(tup12)<<endl;
    cout<<get<4>(tup12)<<" "<<get<5>(tup12)<<endl;
    cout<<get<6>(tup12)<<" "<<get<7>(tup12)<<endl;
    cout<<get<8>(tup12)<<" "<<get<9>(tup12)<<endl;
    cout<<get<10>(tup12)<<endl;
    cout<<typeid(tup12).name();


    return 0;
}