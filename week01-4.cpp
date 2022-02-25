
#include<stdio.h>
char line[1000];
int main()
{
    int total=0
    while(scanf("%s", line)==1){
    int ans=0;
    int N=STRLEN(line);
    for(int i=0;i<1000; i++){
        if( line[i]== '2') ans++;
    }
    printf("%d\n",ans);
    total +=ans;

    }
    printf("Total:%d\n",total);
}
