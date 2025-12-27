int trap(int* height, int heightSize) {
    if (heightSize <= 2) return 0;

    int n = heightSize;
    int lmax = 0, rmax = 0;

    int max_l[n];
    int max_r[n];
    for (int i = 0; i < n; i++) {
        max_l[i] = lmax;
        if (height[i] > lmax)
            lmax = height[i];

        max_r[n - 1 - i] = rmax;
        if (height[n - 1 - i] > rmax)
            rmax = height[n - 1 - i];
    }

    int total = 0;

    for (int i = 0; i < n; i++) {
        int water_level = (max_l[i] < max_r[i]) ? max_l[i] : max_r[i];
        int above_water = water_level - height[i];

        if (above_water > 0)
            total += above_water;
    }

    return total;
}
