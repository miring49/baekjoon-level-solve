import os
import platform
try:
    path = input("path: ")
    extension = input("extension: ")
    file_name = input("file_name: ")
    count = input("task count: ")
    if platform.system() == "Windows":
        os.chdir(path)
    else:
        pass
    for i in range(1, int(count) + 1):
        if os.path.exists(f"{path}/{file_name}{i}.{extension}"):
            print(f"{path}/{file_name}{i}.py already exists")
            continue
        file = open(f"{path}/{file_name}{i}.{extension}", "x")
        print(f"{file.name} created")
        file.close()
except ValueError:
    print("Invalid input")
except FileNotFoundError:
    print("Invalid path")
