inp = input()
output = ""
for i in range(0,len(inp)):
    if i!=len(inp)-1:
        if inp[i]!=inp[i+1]:
            output+=inp[i]
        else:
            continue
    else:
        output+=inp[i]
        break
print(output)