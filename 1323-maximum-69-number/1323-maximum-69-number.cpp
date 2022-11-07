// class Solution {
// public:
//     int maximum69Number (int num) {
//         string s = to_string(num);
//         string ans ;
//         for(int i = 0 ; i < s.size() ; i++){
//             if(s[i] == '6')
//             {
//                 string temp = s;
//                 temp = s.substr(0,i) + '9' + s.substr(i+1,s.size());
//                 ans = max(ans,temp);
//             }
//         }
//        int nn =  stoi(ans);
//        return nn;
//     }
// };
class Solution {
public:
    int maximum69Number (int num) {
        // Convert the input 'num' to a string 'numString'.
        string numString = to_string(num);

        // Iterate over the string (from high to low).
        for (auto &currChar : numString) {
            // If we find the first '6', replace it with '9' and break the loop.
            if (currChar == '6') {
                currChar = '9';
                break;
            }
        }

        // Convert the modified string to integer and return it.
        return stoi(numString);
    }
};