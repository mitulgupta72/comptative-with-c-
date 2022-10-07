#include <bits\stdc++.h>
#include<typeinfo>
using namespace std;
void explainvector()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);  //faster than push_back
    // cout<<v[0];`

    // vector<pair<int,int>> v;
    // v.push_back({3,4});
    // v.emplace_back(4,5);
    // cout<<v[0].first;

    // vector<int> v(5,100);
    // cout<<v[4];

    // vector<int> v1(5);
    // cout<<v[0]<<v[1]<<v[2]<<v[3]<<v[4];

    // vector<int> v2(v1);
    // cout<<v2[0];
    vector<int> v = {1, 2, 3, 4, 5 };

    // begin() points to memory location of first element
    // vector<int>::iterator it = v.begin();
    // cout<<*(it);

    // end() points to the location just after the last element
    // vector<int>::iterator it = v.end();
    // it--;

    // points to the memory location just before the first element
    // on decrement by one points first element 
    // vector<int>::reverse_iterator it = v.rend();
    // auto it = v.rend();
    // it--;
    // cout << *(it)<<endl;
    // cout<<typeid(it).name();   //to find data type

    // points to memory location of the last element
    // it++ i.e. increment on iterator will next point to last second element
    // vector<int>::iterator it = v.rbegin();

    // back() points to the last element
    // cout << v.back();

    // printing all elements of a vector
    // for(vector<int>::iterator it =v.begin();it!=v.end();it++){
    //     cout<<*(it);
    // }
    // auto automatically scan the data type so one can use it in place of data type and it will automatically identify it according to value assigned
    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

// In {1,2,3,4,5} this will delete second element
    // v.erase(v.begin()+1);

// erases all elements from v.begin()+2 to an element defore v.begin()+4
// v.erase(v.begin()+2,v.begin()+4);

// inserts 300 at v.begin()
// v.insert(v.begin(),300);

// inserts at v.begin+1 2 times '10' element
// v.insert(v.begin()+1 ,2,10);

// gives size of vector v
// cout<<v.size();
// cout<<v.begin();

// v.pop_back();
//     for (auto it : v)
//     {
//         cout << it << " ";
//     }


// vector<int> v1={1,2};
// vector<int> v2={3,4};
// v1.swap(v2);
//     for (auto it : v1)
//     {
//         cout << it << " ";
//     }
//     for (auto it : v2)
//     {

//         cout << it << " ";
//     }

    // erases allelements of vector 
// v.clear();

cout<<v.empty();

}
int main()
{
    explainvector();
    int v=0;
    // cout<<typeid(v).name();
    return 0;
}   