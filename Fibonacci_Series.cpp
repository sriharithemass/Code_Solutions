class Solution {
public:
    int fib(int n) {
        if(n<=1)
        return n;

        return fib(n-1)+fib(n-2);
    }
};

class Solution {
public:
    int fib(int n) {
        if(n==0)
        return 0;

        int prev=1;
        int curr=1;
        int next;

        for(int i=0;i<n-2;i++)
        {
            next=curr+prev;
            prev=curr;
            curr=next;
        }

        return curr;
    }
};
