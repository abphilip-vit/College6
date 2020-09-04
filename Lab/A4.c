// Types of Sorting

#include <stdio.h> 

void swap(int *x, int *y){ 

    int t = *x; 

    *x = *y; 

    *y = t; 

} 

 

void selection(int arr[], int n){ 

    int i, j, min; 

    for (i = 0; i < n-1; i++) 

    { 

        min = i; 

        for (j = i+1; j < n; j++) 

          if (arr[j] < arr[min]) 

            min = j; 

        swap(&arr[min], &arr[i]); 

    } 

} 

void insertion(int arr[], int n){ 

    int i, j, k; 

    for (i = 1; i < n; i++) { 

        k = arr[i]; 

        j = i - 1; 

 

        while (j >= 0 && arr[j] > k) { 

            arr[j + 1] = arr[j]; 

            j = j - 1; 

        } 

        arr[j + 1] = k; 

    } 

} 

void bubble(int arr[], int n){ 

   int i, j; 

   for (i = 0; i < n-1; i++) 

       for (j = 0; j < n-i-1; j++) 

           if (arr[j] > arr[j+1]) 

              swap(&arr[j], &arr[j+1]); 

} 

void print(int arr[], int size) 

{ 

    printf("Sorted array: \n"); 

    int i; 

    for (i=0; i < size; i++) 

        printf("%d ", arr[i]); 

    printf("\n"); 

} 

 

int main() 

{ 

    int arr[] = {25, 64, 22, 11, 12}; 

    int n = sizeof(arr)/sizeof(arr[0]); 

    selection(arr, n); 

    print(arr, n); 

    bubble(arr, n); 

    print(arr, n); 

    insertion(arr, n); 

    print(arr, n); 

    return 0; 

} 
