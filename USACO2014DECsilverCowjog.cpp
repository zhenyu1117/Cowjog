#include <cstdio>
#include <cstring>
#include <algorithm>
#define inc(i,j,k) for(int i=j;i<=k;i++)
#define maxn 100010
using namespace std;

inline int read(){
    char ch=getchar(); int f=1,x=0;
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1; ch=getchar();}
    while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
    return f*x;
}
int p[maxn],v[maxn],n,slow,ans,t;
int main(){
    n=read(); t=read(); inc(i,1,n)p[i]=read(),v[i]=read(); slow=n; ans=1;
    for(int i=n-1;i>=1;i--){
        if(1LL*p[i]+1LL*v[i]*t<1LL*p[slow]+1LL*v[slow]*t)ans++,slow=i;
    }
    printf("%d",ans); return 0;
}
