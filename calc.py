from tkinter import Tk, Entry, Button, StringVar


class Calculator:
    def __init__(self, master):
        master.title("Calculator")
        master.geometry("357x420+0+0")
        master.config(bg="grey")
        master.resizable(False, False)
        self.equation = StringVar()
        self.entry_value = ''
        Entry(width=17, bg='#fff', font=('Arial Bold', 28),
              textvariable=self.equation).place(x=0, y=0)

    def show(self, value):
        self.entry_value += str(value)


root = Tk()
Calculator = Calculator(root)
root.mainloop()
