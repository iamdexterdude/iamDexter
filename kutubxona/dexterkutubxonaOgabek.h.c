#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void max_son(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("max = %d\n", max);
}

void mas(int a[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main() {
    
    int arr[5]; 
    int size = sizeof(arr) / sizeof(arr[0]);

    mas(arr, size);
    max_son(arr, size);

    return 0;
}
  void prime(){
   int n;
   printf("son= ");
   scanf("%d",&n);
   int k=2,w=1;
   while (k<n){
     if (n%k==0){
      w=0; break;
     }
     else  k++;   
   }
   if (w){
      printf("tub");
   }
   else printf("tubmas");
  }
