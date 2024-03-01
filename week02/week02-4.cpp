class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N=s.length(); //C++的字串的長度
        int one = 0;
        for(int i=0; i<N; i++){ //C/C++的迴圈(有圓括號)
            if(s[i]=='1')one++;
        }
        //printf("N:%d one%d,N ,one");
        string ans;
        for(int i=0; i<one-1; i++) ans +='1';
        for(int i=0; i<N-one; i++) ans +='0';
        ans += '1';
        return ans;
    }
};