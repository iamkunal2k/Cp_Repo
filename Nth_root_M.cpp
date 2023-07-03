//Problem Link:
// https://www.codingninjas.com/studio/problems/nth-root-of-m_1062679?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries

int function(int mid ,int n, int m) {
  long long ans = -1;
  for(int i=0; i<=n; i++) {
    ans = ans + mid;
    if( ans > m) return 2;
  }
  if(ans == m) return 1;
  return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int s = 0, e = m;
  while(s <= e){
    int mid = (s+e)/2;
    int midN = function(mid, n, m);
    if(midN == 1) {
      return mid;
    }
    else if(midN == 0 ) s = mid +1;
    else e = mid - 1;
  }
  return -1;
}