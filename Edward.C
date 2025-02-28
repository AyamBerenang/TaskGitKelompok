#include <stdio.h>

void Merge(int arr[], int l, int m, int r){
    int temp[l + r + 1];
    int m = (l+r)/2;
    int idx = 0, L = l, R = m+1;

    while(L <= m && R <= r){
        if(arr[L] < arr[R]){
            temp[idx] = arr[L];
            idx++, L++;
        } else {
            temp[idx] = arr[R];
            L++; R++;
        }
    }
}

void Divide(int arr[], int l, int r){
    if(l < r){
        int m = (l+r)/2;
        Divide(arr, l, m);
        Divide(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}