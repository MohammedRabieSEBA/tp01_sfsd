import os

def executer_programme(n):
    chemin = f".\\EXO{n}\\index0{n}.c"
    if os.path.isfile(chemin):
        os.system(f"gcc {chemin}")
        os.system(f".\programme{n}.exe")
    else:
        print(f"Le programme {n} n'existe pas.")

def afficher_menu():
    print("Menu :")
    for i in range(1, 7):
        print(f"{i}. Programme {i}")
    print("0. Quitter")

def main():
    while True:
        afficher_menu()
        choix = int(input("Choisissez le programme à exécuter (1-6) ou 0 pour quitter : "))
        if choix == 0:
            print("Au revoir !")
            break
        executer_programme(choix)

if __name__ == "__main__":
    main()
