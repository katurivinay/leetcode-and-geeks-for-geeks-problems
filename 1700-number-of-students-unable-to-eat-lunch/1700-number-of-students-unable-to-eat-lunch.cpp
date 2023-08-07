// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         queue<int> q;
//         stack<int> s;
//         int n = students.size() , count_1 = 0 , count_0 = 0;
//         for(int i = 0 ; i < n ; i++){
//             q.push(students[i]);
//             s.push(sandwiches[n - i - 1]);
//             if(students[i] == 1)count_1 += 1;
//             if(students[i] == 0)count_0 += 1;
//         }
    
//     while( !q.empty() )
//     {
//         if(q.front() == s.top()){
//             if(s.top() == 1){
//                 count_1 -=1;
//             }
//             else count_0 -= 1;
//             s.pop();
//             q.pop();
           
//         }
//         else{
//             if(s.top() == 0 and count_0 == 0){
//                 break;
//             }
//             else if(s.top() == 1 and count_1 == 0){
//                 break;
//             }
//             else{
//                 int tem = q.front();
//                 q.pop();
//                 q.push(tem);
//             }
//         }
//     }
//     return q.size();
//     }
// };

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(int i=0;i<sandwiches.size();i++){
            q.push(students[i]);
        }
        int i=0,k=0;
        
        while(q.size()!=0 && k!=q.size()){
            if(q.front()!=sandwiches[i]){q.push(q.front());k++;}
            else {k=0;i++;}
            q.pop();
        }
        return q.size();
    }
};