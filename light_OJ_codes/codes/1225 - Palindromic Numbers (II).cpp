#include<cstdio>
#include<cstring>

int main()
{
    char s[12];
    int i, j, ck, caseno;
    int t;
    caseno = 1;
    scanf("%d", &t);
    while(t--){
        ck=0;
        scanf("%s", s);
        for(j=0, i=strlen(s)-1, j<strlen(s); i>=0; j++, i--){
            if(s[j] == s[i]){
                ck=1;
            }else{
                ck=0;
                break;
            }
        }
        if(ck==1){
            printf("Case %d: Yes\n", caseno);
        }else{
            printf("Case %d: No\n", caseno);
        }
        caseno++;
    }
    return 0;
}
