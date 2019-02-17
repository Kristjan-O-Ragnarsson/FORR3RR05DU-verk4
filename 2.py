def linear(l, n):
    """
    Linear Search
    :param l: iterator to search
    :param n: item to find
    :return: index of item -1 if not found
    """
    _list = l
    _find = n
    _index = 0

    for i in range(len(_list)):
        #print "{},{},{}".format(_index, i,( _list[i] == _find))
        if _list[i] == _find:
            break
        _index += 1
    if len(_list) == _index:
        _index = -1

    return _index

li = [8,5,3,9,1,9,2,6]
print linear(li, 5)
