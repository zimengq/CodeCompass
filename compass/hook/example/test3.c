int f(int x){
  if (x > 100)
  {
  return x;
  }
  else
 { 
  x = x + 1;
  return f(x);
  }
}

