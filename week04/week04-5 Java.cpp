///Java
#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d",&n);///��n�����
    for(int i=0;i<n; i++){ ///�j��]6��
        scanf("%d", &a);///�Ʀra:�٦�a�ӼƦr
        int ans=0;///�j��e��int ans=0
        for(int j=0;j<a;j++){
            scanf("%d",&b);
            ans += b;
        }
        printf("%d\n",ans);
    }

}
