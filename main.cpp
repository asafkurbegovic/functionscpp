
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <bits/stdc++.h>
#include <cstdint>
using namespace std;




    // this  function calculates factorial and stores it in array
    // it multiply x with number from array and res_size is number of elements in array
int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    // multiplying n(from factorial) with element of array
    // and storing its last digit to array and putting rest in carry
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;

        res[i] = prod % 10;

        carry  = prod/10;
    }

    // insert carry in array and increase array size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}



    // obtaining number that needs to be calculated,
    //initialize array and its size, start looping trough given number and
    //calling method which calculates it. After that is executed it loops trough array
    // and prints it
void my_factorial(int n)
{
    int res[100];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);


    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}



    //recursively iterating trough function and multiplying it by itself
    //until it reaches exponent of 1
unsigned long long int my_power(int base, int exp){
    if (exp == 1) return base;
    return base * my_power( base, exp-1);
}


    //because number of combinations often have numbers which
    //are repeating we use matrix to store them and when
    //they occur it does not need to calculate them again but just
    //retrieve those values which saves time when working with slightly bigger numbers
unsigned long long int my_choose(int n, int k){
        int M[n+1][k+1];
        for (int i=0;i<=n;i++){
            for(int j=0;j<=min(i,k);j++ ){
                if(j == 0 || j == i){
                    M[i][j] =1;}
                else
                    M[i][j]= M[i-1][j-1] + M[i-1][j];
            }
        }
    return M[n][k];
    }


int main()
{
    cout<<"Combinations: "<<my_choose(6,2)<<endl;
    cout<<"Power: "<<my_power(2,3)<<endl;
    cout<<"Factorial: ";
    my_factorial(30);


    return 0;
}
