#include <iostream>
#include <cstdio>
using namespace std;

int counter(char line[], char ch[]);

int main()
{
    char line[10001], ch[2];
    int T, count;

    scanf("%d", &T);   
    while(T--){
        scanf(" %[^\n]", line);
        scanf("%s", ch);
        count = counter(line, ch);

        if (count == 0){
            printf("'%c' is not present\n", ch[0]);
        }else{
            printf("Occurrence of '%c' in '%s' = %d\n", ch[0], line, count);
        }
    }
    return 0;
}


int counter(char line[], char ch[]){
    int count = 0;
    bool is_true;
    for (int i=0; line[i] != '\0'; i++){
        is_true = (ch[0] == line[i] || ch[0] - 32 == line[i] || ch[0] + 32 == line[i]);
        if(is_true){
            count++;
        }
    }
    return count;
}