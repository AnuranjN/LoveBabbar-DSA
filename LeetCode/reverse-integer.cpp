#include<iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
        int digit=x%10;
        
        if((ans<INT_MIN/10)||(ans>INT_MAX/10)){
            return 0;
        }
        
        ans=(ans*10)+digit;
        x=x/10;}
        
        cout<<ans;
        return ans;





    }
};