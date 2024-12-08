# Undo-Redo Text Editor Simulation
A simple undo-redo simulation using stack in C.

## Main Menu
There are six option in the main menu.

![image](https://github.com/user-attachments/assets/4db0a8e6-7b17-4fc0-b6b1-ad63bace5786)

### 1. Write
This option will request a input from user.

![image](https://github.com/user-attachments/assets/3187daa9-6ddd-431d-92ab-0c025906f0d4)

After that the input will be stored into a stack and redirect the user back into the main menu.

![image](https://github.com/user-attachments/assets/46558e3e-009e-409c-8d9a-a84afc800f5c)

## 2. Undo
This option will remove the latest inputted text.

![image](https://github.com/user-attachments/assets/c068fa67-95c1-4518-b4c7-9d48b007465e)

![image](https://github.com/user-attachments/assets/5bb2c672-144a-4c66-8915-60f23dd87eb3)

If there's no more text left in the stack it will display an error message.

![image](https://github.com/user-attachments/assets/8046def1-6d69-46a9-86c5-c0eecd5bb201)

## 3. Redo
This option will add the next inputted text.

![image](https://github.com/user-attachments/assets/7c01752e-049b-48d7-9dbb-0b98c154c86f)

![image](https://github.com/user-attachments/assets/776cc5c5-5255-4d6f-ae71-1eb6eae5134a)

If there's no more text in the top stack it will display an error message.

![image](https://github.com/user-attachments/assets/9d3fec83-3bf8-41b0-9874-8d0b6139fc41)

## 4. Latest Undo
This option will display previously inputted text.

![image](https://github.com/user-attachments/assets/21a36ed4-4586-4f5d-9978-f81f07c78df7)

If your current text is the oldest text, it will display an error message.

![image](https://github.com/user-attachments/assets/9f92b2f1-1f50-45f8-b698-be9636179a40)

## 5. Latest Redo
This option will display the next inputted text.

![image](https://github.com/user-attachments/assets/cf66ffb8-f9cc-40ca-b264-723af23e70b6)

If your current text is the latest text, it will display an error message.

![image](https://github.com/user-attachments/assets/7f32d2f8-6169-439d-8cf8-23596c54b692)

## 6. Exit
This option will stop the application. The application will not save the inputted text.
