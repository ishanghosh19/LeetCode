int areaOfMaxDiagonal(int** dimensions, int dimensionsSize, int* dimensionsColSize) {
    int maxDiagSq = 0;
    int maxArea = 0;

    for (int i = 0; i < dimensionsSize; i++) {
        int l = dimensions[i][0];
        int w = dimensions[i][1];
        
        int diagSq = (l * l) + (w * w);
        int area = l * w;

        if (diagSq > maxDiagSq) {
            maxDiagSq = diagSq;
            maxArea = area;
        } else if (diagSq == maxDiagSq && area > maxArea) {
            maxArea = area;
        }
    }

    return maxArea;
}