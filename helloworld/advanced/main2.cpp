
/*
 * Exemplo de HelloWorld usando criptográfia simples
 *
 * https://twitter.com/CourantJudicael/status/1433347143583076353/
 */
int main()
{
  uint64_t dx = 0xf6aec40caa820;

  while(dx >>=4)
    putchar((0x7f626168695a452d >> ((dx & 017) << 2) ^ 015) & 0377);
  
  return 0;
}
