from sys import argv
import subprocess



def removeNonChar(st):
    s=""
    for i in st:
        if ord(i.lower()) in range(97, 123):
            s+=i
    return s


l = len(argv)
ext = argv[1].split(".")[1]
if l==1 or l>2 or ext!="cpp":
    print("Please Enter the filename with .cpp ext.")
else:
    file = removeNonChar(argv[1][:l-4])+".cpp"
    subprocess.check_output("copy C:\\Users\\zdo\\Documents\\Projects\\Python\\VS\\cpp.cpp .\\" + file, shell=True)
    subprocess.check_output("code " + file, shell=True)
