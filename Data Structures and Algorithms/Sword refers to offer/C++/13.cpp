//1
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> result;
        for(int i=0;i<array.size();i++)
            if(array[i]%2==1)
                result.push_back(array[i]);
        for(int j=0;j<array.size();j++)
            if(array[j]%2!=1)
                result.push_back(array[j]);
        array=result;
    }
}; 

//2
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        if(array.size( ) <= 1)
        {
            return ;
        }

        vector<int> array_temp;
        vector<int>::iterator ib1, ie1;
        ib1 = array.begin();


        for (; ib1 != array.end();)
        {           
            if (*ib1 % 2 == 0)
            {
                array_temp.push_back(*ib1);
                ib1 = array.erase(ib1);
            }
            else{
                ib1++;
            }

        }
        vector<int>::iterator ib2, ie2;
        ib2 = array_temp.begin();
        ie2 = array_temp.end();

        for (; ib2 != ie2; ib2++)             
        {
            array.push_back(*ib2);
        }
    }
}; 


