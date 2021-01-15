#include<iostream>
using namespace std;

long long int fibonacci(long long int);

int main(){
    long long int x = 50;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(long long int n){
    if(n == 1) return 1;
    if(n == 0) return 0;
    return fibonacci(n-1) + fibonacci(n-2);
}