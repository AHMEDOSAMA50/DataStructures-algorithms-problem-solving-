class Solution {
public:
    bool isPalindrome(int x) {
        
        string str = to_string(x);
        stack <int> s;
        for(int i = 0 ; i < str.length(); i++ ){
            s.push(str[i]);
        }
        
        int m = str.length() - 1;
                
for (int y = 0 ; y < m ; y++){
     if( (s.top()) == str[y] ) {
          s.pop();
      }
    else 
    {
       return false;
        
    } 
}
        return true;
     
};
};