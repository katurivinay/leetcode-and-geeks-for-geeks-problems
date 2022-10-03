class Solution {
public:
    int commonFactors(int a, int b) {
        int x = __gcd(a,b),count = 0;
        for(int i = 1 ; i <= x ;i++){
            if(x%i == 0){
                count+=1;
            }
        }
        return count;
    }
};