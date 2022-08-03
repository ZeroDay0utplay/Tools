from sys import argv
import os




l=len(argv)
if l==1 or l>2 or argv[1].split(".")[1]!="py":
    print("[+] Please Enter the filename with .py ext.")
else:
    file = argv[1].split(".")[0]
    os.system("pyinstaller --onefile " + argv[1])
    os.system("del *.spec")
    os.system("rmdir /s /Q build")
    os.system(f"move .\\dist\\{file}.exe .\\{file}.exe")
    os.system("rmdir /s  /Q dist")
    os.system("rmdir /s /Q __pycache__")