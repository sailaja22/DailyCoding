Mark the First Row and First Column:

Traverse the matrix, and if you find a zero at position (i, j), mark `matrix[i][0]` and `matrix[0][j]` with 0.

Modify the Rest of the Matrix:

Iterate through the matrix starting from (1, 1).
If either `matrix[i][0]` or `matrix[0][j]` is zero, set `matrix[i][j]` to zero.
Modify the First Row and First Column:
Based on `matrix[0][0]` and col0, modify the first row and first column. (start iterating from last as if we iterate it from first it will affect rest of the matrix)
