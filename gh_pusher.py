import sys
import os


if len(sys.argv) != 2:
    print("[!] Please Enter 1 argument only (Commit msg)")
    exit()

os.chdir("c:/users/hamat/documents/projects/food-delivery/")
os.system("git add .")
os.system('git commit -m "' + str(sys.argv[1]) + '"')
os.system("git push")
