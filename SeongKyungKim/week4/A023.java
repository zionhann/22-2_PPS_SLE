class Solution {
    public int addDigits(int num) {
        int[] n;
        int sum=0;
        int len = (int)(Math.log10(num)+1);
        
        while(len>1){
            n = new int[len];
            sum =0;
            for(int i=0; i<len; i++){
                n[i]  = num % 10;
                num = num/10;
            }
            for(int i=0; i<len; i++){
                 sum += n[i];
             }
            num = sum;
            len = (int)(Math.log10(num)+1);
        }
        
        if(len==1) sum=num;
        return sum;
    }
}
