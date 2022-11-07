class Solution {
public:
    int maximum69Number (int num) {
        int p = log10(num);
        bool flag = false;
        int res = 0;
        while(p >= 0){
            int mask = pow(10,p);
            int dig = num / mask;
            num = num % mask;
            if(dig == 6 && flag == false){
                flag = true;
                dig = 9;
            }
            res = res+dig*(pow(10, p));
            p--;
        }
        return res;
    }
};