#include <stdio.h>
char arr[1024];
int index = 0;
int main()
{

    printf("jinruminganzifuxitong\n");
    while(1)
    {
    printf("1---tianjiaminganzifu\n");
    printf("2---shanchuminganzifu\n");
    printf("3---chakansuoyouminganzifu\n");
    printf("4---tihuanneirongzhongdeminfanzifu\n");
    printf("5---tuichu\n");

    printf("qingxuanzexiangyinggongneng\n");
    int code;
    scanf("&d",&code);
    
   
    if(code ==1)
    {
        printf("qingshuruyaotianjiademinganzifu\n");
        char m;
        scanf("%c",&m);  
        scanf("%c",&m); 
        arr[index] =m;
        index++;
        printf("tianjiachenggong,dianjihuichejixu\n");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);
    }
    }
    
    return 0;

}