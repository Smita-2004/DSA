// Naive approach
int gcd(int a, int b){
    int res= Math.min(a,b);
    while(res>0){
        if(a % res==0 && b % res==0){
            break;
        }
        res--;
    }
    return res;
}

// efficient approach using euclidean algorithm

int gcd(int a, int b){
    while(a != b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
        return a;
    }
}
