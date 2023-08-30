#include<stdio.h> 
int main() {
int time, hour, minuite, seconds, remaining_time;
scanf("%d", &time);
hour = time/(60*60);
remaining_time = time%(60*60);
minuite = remaining_time/60;
seconds = remaining_time%60;
printf("%d : %d : %d\n", hour,minuite,seconds);

 return 0;
}
