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
 long long n,m,a,length_ceil,width_ceil,min_num_flagstones;
 double length,width;
 scanf("%lld %lld %lld",&n,&m,&a);
 length = (double)n/a;
 length_ceil = ceil(length);
 width = (double)m/a;
 width_ceil = ceil(width);
 min_num_flagstones = length_ceil * width_ceil;

printf("%lld\n",min_num_flagstones);
}
