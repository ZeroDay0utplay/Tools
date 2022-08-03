def enc(l):
    for letter in l:
        




file = open(input("Enter the full path of the file > "), "r").read()
file = file.split("\n")
kys = []
keys2enc = []
for l in file:
    for word in l.split():
        kys.append(word)
for i in range(1, len(kys)-1):
    if kys[i+1] == "=" or kys[i-1] == "for" :
        keys2enc.append(kys[i])
    elif kys[i-1] == "def":
        keys2enc.append(kys[i][:kys[i].index("(")])



encFile = open(input("Enter the full path of the modified file > "), "w")
print(keys2enc)