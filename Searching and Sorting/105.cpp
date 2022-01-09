int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        // int sum=A+B+C;
        int a=max(A,max(B,C));
        int b=min(A,min(B,C));
        
        return (A+B+C-(a+b));
    }
