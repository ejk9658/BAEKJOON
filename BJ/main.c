#include <stdio.h>

int main(void) {
    int N, max, min;
    scanf("%d",&N);
    
    int n[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&n[i]);
    }
    max=min=n[0];
    for(int i=1;i<N;i++) {
        if(max<n[i]) max=n[i];
        if(min>n[i]) min=n[i];
    }
    printf("%d %d\n",min,max);
}
