#include <stdio.h>
struct dmy{
    unsigned day ; //: 5 ;
    unsigned month; //: 4;
    unsigned year;// : 8;
    };
int main (){
    struct dmy date;
    while(scanf("%u%u%u", &date.day, &date.month, &date.year)!=EOF)
        printf("Date:%d-%d-%d\n",date.day,date.month,date.year);
    return 0;
}
/*struct dmy{
    int date ;
    int month;
    int year;
};*/
