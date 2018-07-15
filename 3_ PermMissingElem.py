# https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/

def solution(A):
    max = len(A)+1
    return int(1/2*max*(1+max) - sum(A)) # 1/2*max*(1+max) : arithmetic progression