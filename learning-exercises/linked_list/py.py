students = ['brian gomez', 'anthony mcmellen', 'brian plaza']

def first_name(array):
    temp = []
    for name in array:
        temp.append(name.split()[0])
    return temp


for student in students:
    temp = first_name(students)
    first = student.split()[0]
    if first in temp:
        temp.remove(first)
    if first in temp:
        print(student)
    elif first not in temp:
        print(first)


