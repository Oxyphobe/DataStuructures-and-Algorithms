class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
       int  n = A.size();
       int *Left=&A[0], *Right=&A[n-1] ;
        
        while(Left<Right)
        {
            if(*Left%2!=0 && *Right%2!=0) //ODD-ODD
            {
                Right--;
            }
            else if(*Left%2!=0 && *Right%2==0  ) //ODD-EVEN
            {
                std::swap(*Left,*Right);
                Left++;
                Right--;
            }
            else if(*Left%2==0 && *Right%2!=0  ) //Even-ODD
            {
                Left++;
                Right--;
            }
            else //Even-EVEN
            {
                Left++;
            }

        }
        
        
        
        return A;
        
        
    }
};
