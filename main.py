import os
for i in os.listdir():
    os.system(f"cd '{i}'\n touch main.cpp; cd ..")