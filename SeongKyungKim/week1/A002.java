class Solution {
    public List<List<Integer>> generate(int numRows) {
        
	        List<List<Integer>> pascal = new ArrayList<>(numRows);
	        int temp;
	        
	        for(int i=0; i<numRows; i++) {
	            List<Integer> list  = new ArrayList<>(i+1);
	            list.add(1);
	           
	            for(int j=1; j<i; j++){
	                temp = pascal.get(i-1).get(j-1) + pascal.get(i-1).get(j);
	                list.add(temp);
	            }
	            
                if(i>=1) list.add(1);
	            pascal.add(list);
	        }
	    
        return pascal;
    }
}
