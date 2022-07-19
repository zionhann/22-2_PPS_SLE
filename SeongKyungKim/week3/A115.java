class Solution {
    public int maxNumberOfBalloons(String text) {
        char c[] = text.toCharArray();
	    int balloon[] = new int[5];  // c[0]='b', c[1]='a', c[2]='l', c[3]='o', c[4]='n'
	    int count=0;
	    
	    for(int i=0; i<c.length; i++) {
	    	if(c[i]=='b') balloon[0]++;
	    	else if(c[i]=='a') balloon[1]++;
	    	else if(c[i]=='l') balloon[2]++;
	    	else if(c[i]=='o') balloon[3]++;
	    	else if(c[i]=='n') balloon[4]++;
	    }
	    
	    while(true) {
	    	if(balloon[0]>0 && balloon[1]>0 && balloon[2]>1 && balloon[3]>1 && balloon[4]>0)             {
	    		count++;
	    		balloon[0]--;
	    		balloon[1]--;
	    		balloon[2] -=2;
	    		balloon[3] -=2;
	    		balloon[4]--;
	    	}
	    	else break;
	    }
        return count;
    }
}
