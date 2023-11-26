#include <stdio.h>
int main() {
    int n,a,b;
    scanf("%d",&n);
    int tram=0, capacity=0;
    for(int i=0; i<n; i++){
        scanf("%d %d",&a,&b);
         tram = tram - a + b; 
         if(tram > capacity){
            capacity = tram;
         }  
    }
    printf("%d\n",capacity);
    

 return 0;
}