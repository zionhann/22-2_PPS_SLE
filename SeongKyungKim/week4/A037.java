class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> selfDiv = new ArrayList<>();
        int temp;
        boolean isValid;
        
        for(int i=left; i<=right; i++){
            isValid = true;
            temp = i;
            for(int j=0; j<(int)(Math.log10(i)+1); j++) {
                if(temp%10==0) {
                    isValid = false;
                    break;
                }
                if(i%(temp%10)!=0) {
                    isValid = false;
                    break;
                }
                temp = temp/10;   
            }
            if(isValid) selfDiv.add(i);
         }
        return selfDiv;
      
    }
}
