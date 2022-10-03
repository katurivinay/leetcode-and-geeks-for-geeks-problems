class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int xor1 = 0,xor2 = 0;
        if(n1%2 == 0 and n2%2 == 0){
            cout<<"conditoin1";
            return 0;
        }
        else{
            
            for(int i = 0 ; i < n1 ; i++){xor1^=nums1[i];}
            for(int i = 0 ; i < n2 ; i++){xor2^=nums2[i];}
            if(n1%2 != 0 and n2%2 ==0){
                cout<<"conditoin2";
                return xor2;}
            if(n1%2 == 0 and n2%2 !=0){
                cout<<"conditoin3";
                return xor1;
            }
        }
        cout<<"conditoin4";
        return xor1^xor2;
    }
};