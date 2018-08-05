# https://app.codility.com/programmers/lessons/4-counting_elements/frog_river_one/

def solution(X, A):
    if X == A[0]:
        return 0
    elif len(A) == 1:
        return -1    
    goal = X + 1 - A[0]
    if goal in A:
        return A.index(X)
    else:
        return -1
X = 5
A = [1,3,1,4,2,3,5,4]     
print(solution(X, A))

X = 2
A = [2, 2, 2, 2, 2]
print(solution(X, A)) # -1でないとだめっぽい・・・


For example, for the input (2, [2, 2, 2, 2, 2]) the solution returned a wrong answer (got 0 expected -1). 

# (1, [1]) the solution returned a wrong answer (got -1 expected 0). 