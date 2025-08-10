import tkinter as tk
from tkinter import messagebox
from tkinter import ttk
import serial.tools.list_ports

come_selctet = ""

def get_available_ports():
    ports = serial.tools.list_ports.comports()
    return [port.device for port in ports]

def send_serial():
    pass  

def send_message_box(com_var):
    com = com_var.get()
    messagebox.showinfo("Sending", f"Serial Port: {com}")

def frame_top_funktion(root):
    frame_top = ttk.Frame(root)
    frame_top.grid(row=0, column=0, sticky="nsew", padx=5, pady=5)

    frame_top.columnconfigure(0, weight=1)
    frame_top.rowconfigure(0, weight=1)

    tk.Label(frame_top, text="Macro Pad TFT").grid(row=0, column=0, columnspan=2, sticky="ew", padx=50, pady=5)
    tk.Label(frame_top, text="Select COM:").grid(row=1, column=0, sticky="w", padx=5, pady=5)

    come_selct(frame_top)


def come_selct(frame_top):
    com_var = tk.StringVar()
    com_ports = get_available_ports()
    com_dropdown = ttk.Combobox(frame_top, textvariable=com_var, values=com_ports)
    com_dropdown.grid(row=1, column=1, padx=5, pady=5)
    com_dropdown.current(0)  

    come_selctet = com_dropdown

    return come_selctet


def frame_mid_funktion(root):
    frame_mid = ttk.Frame(root, padding=10)
    frame_mid.grid(row=1, column=0)

    # Define list of macro options (can be expanded)
    macro_options = [
        "Ctrl+C", "Ctrl+V", "Ctrl+Z",
        "Alt+F4", "Win+E", "Ctrl+Shift+Esc",
        "Volume Up", "Volume Down", "Mute",
        "Play/Pause", "Custom Macro 1", "Custom Macro 2"
    ]

    # Store all comboboxes in a grid
    combo_grid = []

    for row in range(3):
        combo_row = []
        for col in range(3):
            var = tk.StringVar()
            combo = ttk.Combobox(frame_mid, textvariable=var, values=macro_options, width=20)
            combo.grid(row=row, column=col, padx=5, pady=5)
            combo.set("Select Macro")
            combo_row.append(combo)
        combo_grid.append(combo_row)

    # Button to print selected macros
    def print_macros():
        for r in range(3):
            for c in range(3):
                print(f"Button ({r},{c}) → {combo_grid[r][c].get()}")

    submit_btn = ttk.Button(frame_mid, text="Show Selected Macros", command=print_macros)
    submit_btn.grid(row=1, column=0, pady=10)

def frame_bottom_funktion(root):
    frame_bottom = ttk.Frame(root)
    frame_bottom.grid(row=2, column=0, sticky="nsew", padx=5, pady=5)

    com_var = tk.StringVar()
    submit_button = tk.Button(frame_bottom, text="Submit", command=lambda: send_message_box(com_var))
    submit_button.grid(row=0, column=0, columnspan=2, pady=10)

def main():
    root = tk.Tk()
    root.title("Macro Pad App")

    frame_top_funktion(root)

    # frame_mid_funktion(root)

    frame_bottom_funktion(root)

    root.mainloop()

if __name__ == "__main__":
    main()