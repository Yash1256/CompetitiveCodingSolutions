t=int(input())
P=[]
answer=[]
while(t!=0):
    N,K=map(int, input().split())
    P=list(map(int, input().split()))
    P.sort()
    for j in range(N):
        if(P[j]<=K and K%P[j]==0):
            answer.append(P[j])
        elif(P[j]>K):
            break
        else:
            continue
    #answer the position      
    answer.reverse()
    if(len(answer)>0):
        print(answer[0])
    else:
        print(-1)
    answer.clear()
    P.clear()
    t-=1
