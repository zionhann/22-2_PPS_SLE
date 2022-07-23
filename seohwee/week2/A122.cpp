class Solution {
public:
    bool rotateString(string s, string goal) {
  
        if(s.size() > goal.size()){
            return false;
        }
			
        string temp=s+s;              
        int i = temp.find(goal);  
        
        if(i >= 0) return true;
        else return false;
    }
};
