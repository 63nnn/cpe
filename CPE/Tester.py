"""Please put these tool under the floder where you need to test."""

import tkinter as tk
import pyautogui
from tkinter import filedialog
import os


def get_file():
    tfile = filedialog.askopenfilename(
        title="Choose a file to test", initialdir=os.path.dirname(__file__)
    )
    path_txt.set(f"Choosing now: {tfile}")


def get_content():
    list1 = txt1.get(1.0, "end-1c").split("\n")
    txt1.delete(1.0, "end")
    print(list1)


root = tk.Tk()
root.title("Tester")

# window setting
window_width = root.winfo_screenwidth()
window_height = root.winfo_screenheight()
width = 575
height = 410
root.minsize(575, 410)
left = int((window_width - width) / 2)
top = int((window_height - height) / 2)
root.geometry(f"{width}x{height}+{left}+{top}")

# set str
path_txt = tk.StringVar()
path_txt.set(f"Choosing now: <empty>")

# frame

frm1 = tk.Frame(root)

# item setting
lbl1 = tk.Label(frm1, textvariable=path_txt)
btn1 = tk.Button(frm1, text="Choose file", command=get_file)
txt1 = tk.Text(root)
btn2 = tk.Button(root, text="start", command=get_content)

# pack
frm1.grid(column=0, row=0)

lbl1.grid(column=0, row=0, columnspan=5, padx=10, pady=10)
btn1.grid(column=5, row=0, padx=10, pady=10)
txt1.grid(column=0, row=1, columnspan=6, padx=5, pady=3)
btn2.grid(column=3, row=3, padx=5, pady=5)

# choose file <a txt1 bug>
tfile = ""


os.system(tfile)


root.mainloop()


# if __name__ == "__main__":
#     pass
