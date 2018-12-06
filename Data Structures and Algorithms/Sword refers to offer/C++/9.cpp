//1
class Solution {
public:
    int jumpFloorII(int number) {
        if(number<=1)
			return number;
		return 2*jumpFloorII(number-1); 
    }
};
