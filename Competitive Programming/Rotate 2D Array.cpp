void rotateby90(int n, int matrix[][n])
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[n - 1 - i][j];
            matrix[n - i - 1][j] = temp;
        }
    }
}