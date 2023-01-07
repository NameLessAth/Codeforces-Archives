int main(){
    int n;
    int x, y, z;
    int count;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &x, &y, &z);
        if(x+y+z>=2){
            count+=1;
        }
    }printf("%d", count);
    return 0;
}