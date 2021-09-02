/*
 * Exemplo de HelloWorld usando criptográfia simples
 *
 * https://twitter.com/tsoding/status/1433170025796472836
 */
int main()
{
  uint64_t dx = 0x357620655410;
    
  while(dx) 
    putchar(0x726F6C6564574820 >> (((dx >>= 4) & 0377) << 3));

  return 0;
}
