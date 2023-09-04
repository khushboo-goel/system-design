# S.O.L.I.D Principles of OOPs

S : Single Responsible Principle
O : Open / Closed Principle
L : Liskov Substitution Principle
I : Interface Segmented Principle
D : Dependency Inversion Principle

## Single Responsible Principle
1. Each class should have only one responsibility / one reason to change.

Example: In a class, if there more than one function that can change the behaviour of the class, it does not follow 'S' principle.

3. How to adapt S principle while designing?

Splitting those functions into separate classes.

Example: 
```
class Marker {
    ....
    ....
}

class Invoice {
  Marker markers;
  private int quantity;

  int calculatePrice() {
    int price = markers.cost * this.quantity:
    return price;
  }

  void printInvoice() {
      // logic to print the invoice
  }

  void saveToDb() {
      // logic to save the DB
  }
}
```

The above three functions should be split into seperate classes, using invoice as an object;

eg:
```
class InvoicePrinter {
    private Invoice invoice;

    void printInvoice() {
        // logic is written here
    }
}
```

