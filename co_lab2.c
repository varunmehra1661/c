#include <stdio.h>
int main() {
    int n,x,y,k;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i] = 0;
    }

    for(int i = x;i<n;i = (i+k)%n){
        if(visited[i]>0){
            break;
        }
        visited[i] = 1;
    }
    if(visited[y]>0){
        printf("YES");
    }else{
        printf("NO");
    }
}