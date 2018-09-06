//89 --> 8¹ + 9² = 89 * 1
//695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
//46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

int digPow(int n, int p) {
  if (n>0&&p>0){
  int j=n;
  int i=1, c1 = 0,c2=0;
  for (int m = 10; m <= j; m*=10)i++;
  for (j; 10<=j;j/=10)
  {
    int k = 0;
    k = j%10;
    c1=k;
    i--;
    for (int a = (i+p);a>1;a--)c1*=k;
    c2+=c1;
  }
  c1 = j;
  for (int a = p;a>1;a--) c1*=j;
  c2+=c1;
  i=c2/n;
  if (i<=0)i = -1;
  return i;
}else return -1;
}
