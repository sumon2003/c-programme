/// Sumon Khan ///
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
  int mat[3][3],i,j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        scanf("%d",&mat[i][j]);
    }
    
  }
  printf("\n");

  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
  
 return 0;
}
