class Solution {
public:
    int minimizeXor(int num1, int n) {
         int count = __builtin_popcount(n) ;
        int countnum1 = __builtin_popcount(num1);
        if(count == countnum1){
            return num1;
        }
        int bit1[32] = {0},bit2[32] = {0},number1 = num1; 
        for(int i = 0 ; i < 32 ; i++){
           if(number1&(1 << i)){
               bit1[i] = 1;
           }
        }
        int ans = 0;
        for(int i = 31 ; i >= 0 ; i--){
            if(bit1[i] and count>0)
            {
               bit2[i] = 1;
                count--;
            }
        }
        if(count > 0){
            int i = 0;
                for(i = 0 ; i < 32 ; i++){
                    if(!bit2[i] and count > 0){
                        bit2[i] = 1;count--;
                    }
                    if(count <= 0)break;
                }
        }
        for(int i = 0 ; i < 32 ; i++){
            if(bit2[i]){
                ans |= (1 << i);
            }
        }
        return ans;
    }
    
};