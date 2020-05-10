int binaryToDecimal(int bin) {
  int base = 1, rem, dec = 0;
  while(bin) {
    rem = bin % 10;
    bin = bin/10;
    dec = dec + rem * base;
    base = base * 2;
  }

  return dec;
}
