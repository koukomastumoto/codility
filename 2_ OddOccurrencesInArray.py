# https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/

def solution(A):
    return {A.count(a): a for a in set(A)}.get(1)