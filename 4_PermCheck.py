# https://app.codility.com/programmers/lessons/4-counting_elements/perm_check/

def solution(A):
    total = sum(A)
    max_a = max(A)
    if int(1/2*max_a*(1+max_a)) == total:
        return 1
    else:
        return 0
        
print(solution([1,2,3,4,5]))
print(solution([2,3,4,5]))
print(solution([5,3,10,8,9]))
print(solution([7,4,6,5,3,1,10,8,9,2]))