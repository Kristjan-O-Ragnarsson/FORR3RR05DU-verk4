import sys

_l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


def bins(li, n):
    mid = len(li) // 2
    #print li
    #print mid
    if mid == 0:
        return -1
    if li[mid] == n:
        return _l.index(n)
    elif li[mid] < n:
        return bins(li[mid:], n)
    elif li[mid] > n:
        for i in range(len(li[:mid])):
            if li[i] == n:
                print "kristjan"
                return _l.index(n)
        print "kristjan"
        return -1


print bins(_l, 10)
