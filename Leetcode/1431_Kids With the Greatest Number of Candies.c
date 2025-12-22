#include <stdlib.h>
#include <stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = (bool*)malloc(candiesSize * sizeof(bool));
    int maxCandy = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > maxCandy) {
            maxCandy = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandy) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    *returnSize = candiesSize;
    return result;
}
