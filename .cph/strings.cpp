#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;
    // getline(cin,str);
    // cout<<str<<endl;
    // cin>>str;
    // cout<<str;
    string str1(5,'n');
    // cout<<str1<<endl;
    string str2="mitul_bhaiya_hai";
    // cout<<str2;
    //different functions in string 
    string s1="d",s2="b";
    // s1.append(s2);
    // cout<<s1<<endl;
    // cout<<s1<<s2<<endl;
    // cout <<s1+s2;
    // cout<<s1[2];  //can be acessed like an array 
    //  s1.clear();  //to clear the value from the string 
    // cout<<s1.compare(s2)<<endl;   //comparing s2 with s1
    // if (s2.empty()) //using empty function
    //     cout<<"string is empty";
    // else 
    // cout<<"string is not empty";
    // str2.erase(3,5);   //erase(from,number of words tobe erased )
    //     cout<<str2;
    
    // cout<<str2.find("_");  //returns the position of first occurence of a word 
    // str2.insert(3,"uuuuuuuuuuuuuuu");   //inserts the string at the given po0sition 
    // cout<<str2<<endl;
    // int n=str2.length(),k=str2.size();   //length and size both the functions returns the value of the length of string 
    // cout<<n<<"   "<<k;
    // for(int i=0;i<str2.length();i++){
    //     cout<<str2[i]<<endl;
    // }
//creating substrings
    // string s=str2.substr(6,5);  //creates substring (from,no of elements)
    // cout<<s;
    // string e="123";
    // int h= stoi(e);
    // cout<<h+3<<endl;
    // cout<<to_string(h)+"5";
    string g="asdyfwydvhbasduhgawddmkd";
    sort(g.begin(),g.end());
    cout<<g;

return 0;
}