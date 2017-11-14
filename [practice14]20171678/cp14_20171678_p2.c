#include <stdio.h>
#include <time.h>
#include <string.h>

struct save_time{
    int sec;
    int min;
    int hour;
};

int main() {
    time_t timer;
    struct tm *t;
    struct save_time prevTimePtr;
    struct save_time currentTime;
    struct save_time currentSave;
    char string[1000];
    int count = 1;

    timer = time(NULL);
    t = localtime(&timer);

    prevTimePtr.hour = t->tm_hour;
    prevTimePtr.min = t->tm_min;
    prevTimePtr.sec = t->tm_sec;

    while(1){
        printf("system> ");
        scanf("%[^\n]%*c",string);

        if(strcmp(string,"quit") == 0){
            break;
        }

        if(strcmp(string,"check") == 0){
            timer = time(NULL);
            t = localtime(&timer);

            currentTime.hour = t->tm_hour;
            currentTime.min = t->tm_min;
            currentTime.sec = t->tm_sec;
            
            printf("\n        Check Point #%2d\n",count);
            printf("        Current time =  ");
            printf("%02d : %02d : %02d \n", currentTime.hour, currentTime.min, currentTime.sec);
            printf("        Previous time =  ");
            printf("%02d : %02d : %02d \n", prevTimePtr.hour, prevTimePtr.min, prevTimePtr.sec);
            
            currentSave = currentTime;

            if(prevTimePtr.sec > currentTime.sec){
                currentTime.min -= 1;
                currentTime.sec += 60;
            }
            if(prevTimePtr.min > currentTime.sec){
                currentTime.hour -= 1;
                currentTime.min=+ 60;
            }

            printf("        Elapsed Time =  ");
            printf("%02d : %02d : %02d \n\n", currentTime.hour - prevTimePtr.hour, currentTime.min - prevTimePtr.min, currentTime.sec - prevTimePtr.sec);
            count++;

            prevTimePtr = currentSave;
            
        }
    }

    return 0;
}
