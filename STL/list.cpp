#include <bits\stdc++.h>
using namespace std;

void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(3);
    ls.emplace_front(5);
    // list<int>::iterator it = ls.begin();
    // auto it=ls.begin();
    auto it=ls.rend();

    it--;
    cout << *(it);

    for (int l : ls)
    {
        // cout << l << " ";
    }
}

int main()
{
    explainList();
    return 0;
}

// rest of all functions are same as vector
// begin end rbegin rend clear insert size swap
// NOTE: in list the end() refers to the last element unlike vector and rend() to the first element 
// and the reverse increment and decrement logic works the same as vector



