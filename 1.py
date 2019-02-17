def fall(L):
    """
    Sorter
    This function sorts lists
    :param L:
    :return Sorted list:
    """
    haesta = max(L)
    countL = [0]*(haesta+1)
    resultL = [0]*len(L)

    for i in L:
        countL[i] += 1

    summa = 0
    for i in range(len(countL)):
        summa += countL[i]
        countL[i] = summa

    for i in range(len(L)):
        resultL[countL[L[i]]-1] = L[i]
        countL[L[i]] -= 1

    return resultL

L = [7,1,8,2,5,10,8,9,3,6,1] #[0,2,4,6,8,13]
print fall(L)
