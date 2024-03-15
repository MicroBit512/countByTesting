void countByZero(unsigned x, unsigned n, unsigned result[n]){
  int i = 1; 
  while(n){
    result[i-1] = x * i;
    i++;
    n--;
  }
}

void countByOne(unsigned x, unsigned n, unsigned result[n]){
  while(n){
    result[n - 1] = x * n;
    n--;
  }
}

// this is basically the same as countbyzero, but it saves a little bit of
// processing power by removing the n - 1 from the while loop and basically
// just caluclating that once.
void countByTwo(unsigned x, unsigned n, unsigned result[n]){
  int i = n - 1;
  while(n){
    result[i] = x * n;
    i--;
    n--;
  }
}

// Made by Hashtagz.
void countByThree(unsigned x, unsigned n, unsigned result[n]) {	  
  for (unsigned i = 1; i <= n; i++){
    result[i-1] = i*x;
  }
}
