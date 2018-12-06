//1
class Solution {
public:
	void replaceSpace(char *str,int length) {
        int len=length;
        int i,j;
        for(i=length-1;i>=0;i--)
        {
        	if(str[i]==' ')
        	{
        		len+=2;
        		for(j=len-1;j>i+2;j--)
        		{
        			str[j]=str[j-2];
        		}
        	str[j--]='0';
        	str[j--]='2';
        	str[j--]='%';
			}
        	
        }
        str[len]='\0';
	}
}; 

//2
class Solution {
public:
	void replaceSpace(char *str,int length) {
        int count=0;
        int i;
        for(i=0;i<length;i++)
        	if(str[i]==' ')
        		count++;
        int len=length+2*count;
		for(i=length-1,j=len-1;i>=0&&j>=0;)
		{
			if(str[i]==' ')
			{
				str[j--]='0';
				str[j--]='2';
				str[j--]='%';
				i--;
			}	
			else
				str[j--]=str[i--];
			
		}	
        str[len]='0';	      
	}
}; 
