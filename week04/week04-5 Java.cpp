///Java
#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d",&n);///有n筆資料
    for(int i=0;i<n; i++){ ///迴圈跑6次
        scanf("%d", &a);///數字a:還有a個數字
        int ans=0;///迴圈前面int ans=0
        for(int j=0;j<a;j++){
            scanf("%d",&b);
            ans += b;
        }
        printf("%d\n",ans);
    }

}
