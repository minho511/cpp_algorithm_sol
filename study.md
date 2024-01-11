- 2024/01/11
    - 1987 소수 찾기 (B2)
        - [에라토스 테네스의 체](https://ko.wikipedia.org/wiki/%EC%97%90%EB%9D%BC%ED%86%A0%EC%8A%A4%ED%85%8C%EB%84%A4%EC%8A%A4%EC%9D%98_%EC%B2%B4)
        ```cpp
        void Eratos(int n)
        {
            if (n <= 1) return;
            bool* PrimeArray = new bool[n + 1];
            for (int i = 2; i <= n; i++)
                PrimeArray[i] = true;
            for (int i = 2; i * i <= n; i++)
            {
                if (PrimeArray[i])
                {
                    for (int j = i * i; j <= n; j += i)
                        PrimeArray[j] = false;
                }
            }
        }
        ```
- 2024/01/10
    - 2609 최대공약수와 최소공배수 (B1)
        - 유클리드 호제법
        ```cpp
        # a, b를 입력으로 받아 최대 공약수를 출력.
        int gcd(int a, int b)
        {
            int c;
            while (b != 0)
            {
                c = a % b;
                a = b;
                b = c;
            }
            return a;
        }
        # 최소 공배수는 두 수의 곱을 최대 공약수로 나눈 값.
        ```
