#week 12-1.py
n=int(input("請輸入一個數"))
def isPrime(n):
  for i in range(2,n):
    if n%i==0:
      return False
  return True
if isPrime(n): print("恩是質數")
else: print("N不是質數")