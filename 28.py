def strStr(haystack, needle):
    n=len(needle)
    for i in range(len(haystack)-n+1):
        if haystack[i:i+n]==needle:
            print(i)
            return i
    print("-1")
    return -1

m="sadbutsad"
p="sad"
strStr(m,p)