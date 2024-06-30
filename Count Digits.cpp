class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int temp=N;
        while(temp)
        {
            if( (temp%10)!=0 && (N%(temp%10))==0)
            count++;
            temp/=10;
        }
        return count;
    }
};

class Solution{
public:
    int evenlyDivides(int N){
        
        return log10(N)+1;
    }
};
