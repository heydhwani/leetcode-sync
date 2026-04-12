class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        
        if(numerator == 0) return "0";
        
        string result = "";
        
        // sign
        if((numerator < 0) ^ (denominator < 0)) result += "-";
        
        long num = labs(numerator);
        long den = labs(denominator);
        
        // integer part
        result += to_string(num / den);
        
        long rem = num % den;
        
        if(rem == 0) return result;
        
        result += ".";
        
        unordered_map<long, int> mp; // remainder → index
        
        while(rem != 0) {
            
            // repeat found
            if(mp.count(rem)) {
                result.insert(mp[rem], "(");
                result += ")";
                break;
            }
            
            mp[rem] = result.size();
            
            rem *= 10;
            result += to_string(rem / den);
            rem %= den;
        }
        
        return result;
    }
};