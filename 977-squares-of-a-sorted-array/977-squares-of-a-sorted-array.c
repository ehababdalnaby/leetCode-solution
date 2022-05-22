

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortedSquares(int *A, int ASize, int *returnSize) {
    int *result = malloc(sizeof(int) * (*returnSize = ASize)), *p = A, *q = A + ASize - 1;
    int index = ASize - 1;
    while (p <= q) {
        //*p = *p > 0 ? *p : *p * -1;
        //*q = *q > 0 ? *q : *q * -1;
        if (abs(*p) >= abs(*q)) {
            result[index--] = *p * (*p);
            p++;
        } else {
            result[index--] = *q * (*q);
            q--;
        }
    }
    return result;
}

