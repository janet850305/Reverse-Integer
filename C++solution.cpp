class Solution {
public:
    int reverse(int x) {
        
        int temp=x;
        int k=0;
        int pop;
        while(temp != 0){
            pop = temp % 10;
            temp = temp / 10;
             if (k > INT_MAX/10 || (k == INT_MAX / 10 && pop > 7)) return 0;
            if (k < INT_MIN/10 || (k == INT_MIN / 10 && pop < -8)) return 0;
            k = k*10+pop;
            
        }

        
        return k;
}
};
