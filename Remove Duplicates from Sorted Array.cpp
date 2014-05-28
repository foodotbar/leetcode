class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if (n < 2) return n;
        int j = 1;
        for (int i = 1; i<n; i++){
            if (A[i] != A[i-1]){
                A[j++] = A[i];
            }
        }
        return j;
    }
};

