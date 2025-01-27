#include <bits/stdc++.h>

int main(){
    int n;
    printf("Enter the number of element of the arry: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of the array:\n");
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Display the element:\n");
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("In reverse order:\n");
    for (int i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}