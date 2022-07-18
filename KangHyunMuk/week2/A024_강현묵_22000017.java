class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five_bucks = 0;
        int ten_bucks = 0;
        for(int buck: bills) {
            if(buck==5) 
                five_bucks++;
            if(buck==10)
                if(five_bucks<1)
                    return false;
                else {
                    five_bucks--;
                    ten_bucks++;
                }
            if(buck==20)
                if((ten_bucks<1&&five_bucks<3)||(ten_bucks<2&&five_bucks<1)||(five_bucks==0))
                    return false;
                else
                    if(ten_bucks==0)
                        five_bucks -= 3;
                    else{
                        five_bucks--;
                        ten_bucks--;
                    }
        }
        return true;
    }
}