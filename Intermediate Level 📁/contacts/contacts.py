import json
import os

CONTACTS_FILE = 'contacts.json'

def load_contacts():
    """Charge les contacts depuis le fichier JSON."""
    if os.path.exists(CONTACTS_FILE):
        with open(CONTACTS_FILE, 'r') as file:
            return json.load(file)
    return []

def save_contacts(contacts):
    """Sauvegarde les contacts dans le fichier JSON."""
    with open(CONTACTS_FILE, 'w') as file:
        json.dump(contacts, file, indent=4)

def add_contact(name, phone):
    """Ajoute un contact à la liste."""
    contacts = load_contacts()
    contacts.append({"name": name, "phone": phone})
    save_contacts(contacts)
    print(f"Contact ajouté : {name} - {phone}")

def remove_contact(name):
    """Supprime un contact de la liste."""
    contacts = load_contacts()
    contacts = [c for c in contacts if c['name'] != name]
    save_contacts(contacts)
    print(f"Contact supprimé : {name}")

def display_contacts():
    """Affiche tous les contacts."""
    contacts = load_contacts()
    if not contacts:
        print("Aucun contact trouvé.")
        return
    for c in contacts:
        print(f"Nom : {c['name']}, Téléphone : {c['phone']}")

def main():
    while True:
        print("\nGestionnaire de Contacts")
        print("1. Ajouter un contact")
        print("2. Supprimer un contact")
        print("3. Afficher tous les contacts")
        print("4. Quitter")

        choice = input("Choisissez une option (1-4) : ")
        if choice == '1':
            name = input("Entrez le nom du contact : ")
            phone = input("Entrez le numéro de téléphone : ")
            add_contact(name, phone)
        elif choice == '2':
            name = input("Entrez le nom du contact à supprimer : ")
            remove_contact(name)
        elif choice == '3':
            display_contacts()
        elif choice == '4':
            break
        else:
            print("Choix invalide, veuillez réessayer.")

if __name__ == "__main__":
    main()
