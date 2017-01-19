#include<bits/stdc++.h>
using namespace std;
/*
Given an array A[] and a number x, check for pair in A[] with sum as x.
Write a C program that, given an array A[] of n numbers
and another number x, determines whether or not there exist two elements in S whose sum is exactly x.
*/

void checkpair(int a[] , int size , int sum)
{
    sort(a , a+size);
    int l =0;
    int r =size-1;
    while(l<r){
    if(a[l] + a[r]==sum){
        printf("pair is present %d , %d\n", a[l], a[r]);
        return ;
      }
    else if(a[l]+a[r]> sum)
            r--;
    else
            l--;
  }
  printf("SORRY!! No pair is prsent\n");
}

int main()
{
  int a[]={96,5,-44,23,3,7,33};
  int sum=-41;
  int size=sizeof(a)/sizeof(int);
  checkpair(a,size , sum);
  return 0;
}
