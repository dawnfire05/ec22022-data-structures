void transpose(float** M, int n)
{
  for (int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
      float temp = M[i][j];
      M[i][j] = M[j][i];
      M[j][i] = temp;
    }
  }
}
