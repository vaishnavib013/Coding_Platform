n=int(input())
l=list(map(int,input().split()))
l2=list(set(l))
l1=(sorted(l2,reverse=True))

print(l1[1])
