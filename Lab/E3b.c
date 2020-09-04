/*
Devise code in C to accept age of n employees and construct a min heap. Then display the employee’s ages from highest to smallest. While constructing min heap display each insertion after heapify 
*/

#include<stdio.h> 

#include<stdlib.h> 

#include<string.h> 

#include<limits.h> 

 

int heap[10000000], size; 

 

void ini() 

{ 

      size = 0; 

      heap[0] = -INT_MAX; 

} 

 

void insert(int e) 

{ 

      size++; 

      heap[size] = e; 

      int n = size; 

      while(heap[n/2]>e) 

      { 

            heap[n] = heap[n/2]; 

            n/=2; 

      } 

      heap[n] = e; 

} 

int dmin() 

{ 

      int min_e = heap[1]; 

      int last_e = heap[size--]; 

      int n; 

      int ch; 

      for(n=1;n*2<=size;n=ch) 

      { 

            ch = n*2; 

            if(ch!=size && heap[ch+1]<heap[ch]) 

                  ch=ch+1; 

            if(last_e>heap[ch]) 

                  heap[n]=heap[ch]; 

            else 

                  break; 

      } 

      heap[n] = last_e; 

      return min_e; 

} 

void main() 

{ 

      int num; 

      printf("Number of elements: "); 

      scanf("%d", &num); 

      int ar[num]; 

      int i, e; 

      for(i=0;i<num;i++) 

      { 

            printf("\nEnter element #%d: ",(i+1)); 

            scanf("%d",&e); 

            insert(e); 

      } 

      for(i=(num-1);i>=0;i--) 

            ar[i] = dmin(); 

 

      for(i=0;i<num;i++) 

      { 

            printf("\n%d",ar[i]); 

      } 

} 
