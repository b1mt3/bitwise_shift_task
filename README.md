# Беззнаковый битовый сдвиг, Си 
# (Unsigned bitwise shift, C)

---

### Тестовое задание на реализацию беззнакового побитового сдвига на Си.
#### Условия задания следующие:
   Все числа знаковые (изначально, php или javascript, например)
1. Нужно сделать беззнаковый сдвиг влево и вправо, так как это реализовано во взрослых языках.
2. Библиотеки использовать нельзя.

   Есть только арифметические операции и битовые: &|^!
3. Реализация нужна на любом языке, но без использования встроенных возможностей, только операции, которые описал выше (арифметика и битовые).

---

### Test task to develop an unsigned bitwise shift with C
#### Problem formulation:
   All digits are signed (originally, PHP|JavaScript for instance)
1. Develop a solution for an unsigned bitwise shift (leftward and rightward), just like in high-level languages.
2. No libraries are allowed.

   Only arithmetic and bitwise operations are available: AND, OR, XOR, NOT
3. Any language solution is possible, with only condition to use the available operations mentioned above.

***
### Интерфейс
### Interface
```
b_shift [architecture] [number to perform shift on] [direction of shift] [shift offset]
```
**architecture** - specify with number 32 or 64

**number** - input the number you want to be shifted

**direction of shift** - 'l' for leftward shift, 'r' - for rightward shift

**shift offset** - input the offest of the desired shift

#### EXAMPLE

Perform a rightward shift with 3-bit offset of 32-bit number 2147481574

```
b_shift 32 2147481574 r 3
```

***

### Коды ошибок
### Error codes
0 - исполнение успешно (execution successful)

-9 - неправильно задано архитектура (architecture specification is invalid)

-17 - не переданы условия задачи (no problem to solve)

-33 - дано неправильное направление сдвига (invalid shift direction is given)