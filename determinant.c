// find determinant of matrix  3 x 3 
#include<stdio.h>
int main() {
    int k ;
    printf("Enter element of k : ") ;  
    scanf("%d" , &k)  ; 
    int a[k][k] ; 
    int determinant = 0 ;
    for (int i = 0 ;i< k ; i++){
        for (int j = 0 ;j<k ;j++){
            printf("Enter element of matrix  k[%d][%d]  : " , i,j) ; 
            scanf("%d" , &a[i][j]) ; 
        }
        printf("\n") ; 
    } 
    for (int i = 0 ;i< k ; i++){
        for (int j = 0 ;j< k ;j++){
            printf("%d\t" ,a[i][j]) ; 
        }
        printf("\n") ; 
    }
    // calculate determinant 3x3  
    for (int i = 0 ; i <k ; i++){
        determinant = determinant + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3])); 
    }

    printf("Display determinant of matrix is : %d\n" , determinant) ; 



    return  0 ;
 }