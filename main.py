t = int(input())
for i in range(t):
    n,q = map(int,input().split())
    a = list(map(int,input().split()))
    for x in range(q):
        l,r,k = map(int,input().split())
        sum_a = 0
        for w in range(l):
            sum_a += a[w]
        for w in range(r+1,n):
            sum_a += a[w]
        length = (r-l)+1
        if ((k*length)%2)==0 and (sum_a%2)==0:
            print("NO")
        elif ((k*length)%2)==1 and (sum_a%2)==1:
            print("NO")
        else:
            print("YES")