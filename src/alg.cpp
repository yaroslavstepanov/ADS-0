// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
      while(true)
  {
    a = a%b;
    if(a==0)
    {
      return b;
    }
    b = b%a;
    if(b==0)
    {
      return a;
    }
  }
}
