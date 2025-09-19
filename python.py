# Работа со списками и стеком в Python

# Создание списка (массива)
arr = [1, 2, 3, 4, 5]
print("Список:", arr)

# Добавление элемента
arr.append(6)
print("После добавления:", arr)

# Использование списка как стека (LIFO)
stack = []
stack.append(10)
stack.append(20)
stack.append(30)
print("Стек:", stack)

stack.pop()
print("После pop:", stack)
