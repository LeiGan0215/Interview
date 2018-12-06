//1 
class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent==0)
			return 1.0;
		if(equal(base,0.0)==true&&exponent<0)
			return 0.0;
		double res=1.0;
		if(exponent>0.0)
		{
			res=PowerNormal(base,exponent);
		}
		else
		{
			res=PowerNormal(1.0/base,-exponent);
		}
		return res;
    }
private:
	double PowerNormal(double base,int exponent)
	{
		double res=1;
		for(int i = 0; i < exponent; i++)
        {
            res *= base;
        }
		return res;
	}
	bool equal(double left,double right)
	{
		if(fabs(left-right)<0.0000001)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

//2 
class Solution {
public:
    double Power(double base, int exponent) {
        
    }
} 

//3 
class Solution {
public:
    double Power(double base, int exponent) {
        
    }
} 
