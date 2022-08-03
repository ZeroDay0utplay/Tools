import os
import sys


def ex(cmd):
    os.system(cmd)


print(sys.argv)

ex("pip install pyinstaller")

ex("pyinstaller --onefile " + sys.argv[1] )#+ " -i " + sys.argv[2])

ex("rmdir /S /Q build/")

ex("del " + sys.argv[1].split(".")[0] + ".spec")

ex("move ./dist/" + sys.argv[1].split(".")[0] + ".exe")

