# https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/

def solution(A):
    diff_min = None
    for i, a in enumerate(A):
        if i == 0:
            continue
        diff = abs(sum(A[:i]) - sum(A[i:]))    
        if diff_min == None or diff < diff_min:
            diff_min = diff
    return diff_min    