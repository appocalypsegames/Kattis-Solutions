main(n,b,m,i,r){
    scanf("%i",&n);
    scanf("%i",&b);
    r=0;
    m=b;
    for(i=1;i<n;i++){
        scanf("%i",&b);
        if(b<m){
            m=b;
            r=i;
        }
    }
    printf("%i",r);
}