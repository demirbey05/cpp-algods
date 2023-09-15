//
// Created by huseyin on 9/15/23.
//
#include<iostream>


template<typename T>
void insertionSort(T* A, int n){
    if(n < 2){
        return;
    }
    for(int i = 1;i<n;i++){
        int j = i - 1;
        T cur = A[i];
        while(j >= 0 && A[j] > cur){
            A[j + 1] = A[j];
            j--;
        }
        A[j+1] = cur;
    }
}

// Test
int main(){
    float A[] {1.5,23.53,1.4,41.3,23,3,1};
    insertionSort(A,7);
    for(float i : A){
        std::cout<<i<<" ";
    }

}