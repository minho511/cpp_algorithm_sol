- 2024/01/21
    - 6855 골드바흐의 추측 (S1)
    - 3085 사탕 게임 (S2)
        문자열로 graph 입력 받기 -> Scanf를 많이 사용
        ```cpp
        // Example
        // https://www.acmicpc.net/source/25685850
        // https://www.acmicpc.net/source/9639037
        char Map[52][52];
        scanf("%d", &N);
        for (int i = 1; i <= N; i++) {
            scanf("%s", &Map[i][1]);
        }
        
        ```
- 2024/01/12
    - 유용한 헤더 + 빠른 입출력
      ```cpp
      #include<bits/stdc++.h>
      using namespace std;
    
      int main(){
          ios_base::sync_with_stdio(false);
          cin.tie(NULL); 
          cout.tie(NULL);
    
          int a;
          cin >> a;
          cout << a <<'\n';
          return 0;
      }
      ```
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
