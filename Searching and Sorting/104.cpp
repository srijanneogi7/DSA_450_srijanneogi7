int countSquares(int N) {
        // code her
        int count=0;
        for(int i=1;i*i<N;i++){
            count++;
        }
        return count;
    }
