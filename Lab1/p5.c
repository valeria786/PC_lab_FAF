#include <stdio.h>

int main() {
    int n,v;
    scanf("%d", &n);
    scanf("%d", &v);
    
    int odd[n+1];
    int even[n+1];
    int oddCount=0;
    int evenCount=0;
    
    for(int i=1; i<=n*2;i++){
        if(i%2!=0){
            odd[oddCount]=i;
            oddCount++;
        }}
     
    for(int i=n*2;i>=1;i--){
        if(i%2==0){
            even[evenCount]=i;
            evenCount++;
        }
    }
    

    for(int i=0; i<evenCount; i++){
        if(v%2==0 && even[i]==v){
    printf("%d", odd[i]);}}
        for(int i=0; i<oddCount; i++){
            if(v%2!=0 && odd[i]==v){
    printf("%d", even[i]);}
        }

    return 0;
}