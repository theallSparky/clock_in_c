#include<stdio.h>
#include<time.h> /* For sleep function */
#include<unistd.h>
#include<stdlib.h>
int main() {
int hour, minute, second;
hour = minute = second = 0;
while(1)
{
    //clear ouutput screen
    system("clear");
    //Print time in HH : MM : SS format
    printf("%02d : %02d : %02d", hour,minute,second);
    //clear outpuut buffer in gcc

    fflush(stdout);
    //increase second int by 1
    second++ ;
    //update hour, minute, second
    if( second == 60) {
        second = 0;
        minute ++;
    }
    if( minute == 60) {
        minute = 0;
        hour ++;
    }
    if( hour == 24) {
        hour = 0;
        minute = 0;
        second = 0;
    }
    sleep(1);
}

return 0;
}