bool check(int a){
    int sum = 0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0) 
            sum+=i; 
    }
    if(sum==a) return true;
    return false;
}
