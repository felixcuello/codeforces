
def binaries(result, string, n):
    if(len(string) == n):
        result.append(string)
        return
    else:
        binaries(result, string + "0", n)
        binaries(result, string + "1", n)


matrices = []
binaries(matrices, "", 3)

print(matrices)
