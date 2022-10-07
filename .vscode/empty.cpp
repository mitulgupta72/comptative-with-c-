// // C++ Program to find largest prime 
// // factor of number 
// #include <iostream> 
// #include<bits/stdc++.h> 
// using namespace std; 

// // A function to find largest prime factor 
// long long maxPrimeFactors(long long n) 
// { 
// 	// Initialize the maximum prime factor 
// 	// variable with the lowest one 
// 	long long maxPrime = -1; 

// 	// Print the number of 2s that divide n 
// 	while (n % 2 == 0) { 
// 		maxPrime = 2; 
// 		n >>= 1; // equivalent to n /= 2 
// 	} 

// 	// n must be odd at this point, thus skip 
// 	// the even numbers and iterate only for 
// 	// odd integers 
// 	for (int i = 3; i <= sqrt(n); i += 2) { 
// 		while (n % i == 0) { 
// 			maxPrime = i; 
// 			n = n / i; 
// 		} 
// 	} 

// 	// This condition is to handle the case 
// 	// when n is a prime number greater than 2 
// 	if (n > 2) 
// 		maxPrime = n; 

// 	return maxPrime; 
// } 

// // Driver program to test above function 
// int main() 
// { 
// 	long long n = 15; 
// 	cout << maxPrimeFactors(n) << endl; 

// 	n = 25698751364526; 
// 	cout << maxPrimeFactors(n); 

// } 
// // This code is contributed by Shivi_Aggarwal 

#include<iostream>
#include<conio.h>
#include<climits>
using namespace std;
int main(){
    int T,cost=0;
    cout<<"enter number of test cases";
    cin>>T;
    cout<<endl;
    for(int k=0;k<T;k++){
        int L;
        // cout<<"enter length of test case # "<<T+1<<":";
        cin>>L;
        int arr[L];
        // cout<<"enter elemets of test case # "<<T+1<<":";
        for(int t=0;t<L;t++){
            cin>>arr[t];
        }

        int S=INT_MAX;
        for(int l=0;l<L-2;l++){
            int i=l+1,j;
            for(int q=i;q<L;q++){
                if(arr[q]<S){
                    S=arr[q];
                    j=q+1;
                }    
                cost+=j-(i+1);
                
                }   int r=(i+j-1)/2;
                    for(int s=l,p=(j-1);s<=r && p>=r;s++,p--){
                    int f=arr[s];
                    arr[s]=arr[p];
                    arr[p]=f; 
                    }
        }cout<<cost<<endl;
                cost=0;
    }
}