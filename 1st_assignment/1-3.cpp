#include <iostream>

int main()
{
  int result = 0;
  for (int i = 0; i < 10; i++)
  {
    result += (i + 1);
  }
  std::cout << "1부터 10까지 더한 결과는 " << result << "입니다";

  return 0;
}