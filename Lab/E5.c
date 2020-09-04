/*
Hashing in Array 

Consider an array with the following integers {11, 324, 132, 144, 212, 442, 165, 754, 132, 546, 234, 88, 768, 576, 432, 333, 591, 712, 113, 312}. Consider a 5×5 matrix that maintains a bucket for the hashing function defined ‘modulo 5’. For example, consider 11, 11 % 5 = 1. Therefore 11 is placed at the position (1,0) (i=1 and j=0) in the matrix. Similarly, the number 324, 324 % 5 = 4, is placed at the position (4,0) (i=4 and j=0) in the matrix. However, consider 144, 144 % 5 = 4. Now since (4,0) is already filled, this number is placed at (4,1) (i=4 and j=1). If, however, all the ‘j’th places in the row ‘i’ are filled, the number is discarded. Primarily, initialize the entire matrix to -1. Inscribe a code to display the bucket matrix for the array given above.  
*/

#include<iostream> 
using namespace std; 
void insert (int a[5][5], int n, int j) 
{ 
    int i; 
    i=n%5; 
    if(j<=4) 
    { 
        if(a[i][j]==-1) 
        { 
            a[i][j]=n; 
            return; 
        } 
        else 
        { 
            insert(a,n,j+1); 
        } 
    } 
} 
void pr(int a[5][5], int n) 
{ 

    int x,y; 

    cout<<"\n"; 

    for(x=0;x<n;x++) 

    { 

        for(y=0;y<n;y++) 

            cout<<a[x][y]<<' '; 

        cout<<"\n"; 

    } 

} 

 

int main() 
{ 

    int i,n,f; 

    int a[5][5] = {{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1}}; 

    int al[] = {11, 324, 132, 144, 212, 442, 165, 754, 132, 546, 234, 88, 768, 576, 432, 333, 591, 712, 113, 312}; 

    n=5; 

    f=20; // Total Number of values 

    for(i=0;i<f;i++) 

    { 

        insert(a,al[i],0); 

    } 

    pr(a,n); 
} 
