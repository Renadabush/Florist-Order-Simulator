# 🌸 Florist Order Simulator

A C++ object-oriented simulation of a flower-ordering supply chain, built for the *Principles of Object-Oriented Programming* course (Assignment 2). The project models a chain of collaborating objects — from the customer placing an order to the flowers being delivered — using message passing between class instances.

## 📖 Overview

The simulation recreates the florist example from Lecture #1: **Chris** orders flowers for **Robin** through florist **Fred**. The request travels down a chain of suppliers until the flowers are prepared, then travels back up to be arranged and delivered.

```
Chris → Florist Fred → Wholesaler Watson → Grower Gray → Gardener Garett
                                                                │
                                                     (bouquet prepared)
                                                                │
Robin ← Delivery Person Dylan ← Florist Fred ← Flower Arranger Flora
```

Each arrow represents a connection between objects that exchange messages (i.e., invoke each other's methods) during the simulation, mirroring a real-world request → fulfillment → delivery pipeline.

## 🧩 Class Design

| Class | Responsibility |
|---|---|
| `Person` | Base class for individuals who can order and receive flowers |
| `Florist` | Central coordinator; receives orders and routes them to the wholesaler, arranger, and delivery person |
| `Wholesaler` | Forwards flower orders to a grower |
| `Grower` | Forwards flower orders to a gardener |
| `Gardener` | Prepares the raw `FlowersBouquet` from the requested flower list |
| `FlowerArranger` | Arranges a prepared bouquet |
| `DeliveryPerson` | Delivers the finished bouquet to the recipient |
| `FlowersBouquet` | Data object holding the flower list and its `is_arranged` state |

### Core API

```cpp
class Person {
    std::string name;
    void orderFlowers(Florist*, Person*, std::vector<std::string>);
    void acceptFlowers(FlowersBouquet*);
};

class Florist {
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;
    void acceptOrder(Person*, std::vector<std::string>);
};

class Wholesaler {
    Grower* grower;
    FlowersBouquet* acceptOrder(std::vector<std::string>);
};

class Grower {
    Gardener* gardener;
    FlowersBouquet* prepareOrder(std::vector<std::string>);
};

class Gardener {
    FlowersBouquet* prepareBouquet(std::vector<std::string>);
};

class FlowerArranger {
    void arrangeFlowers(FlowersBouquet*);
};

class DeliveryPerson {
    void deliver(Person*, FlowersBouquet*);
};

class FlowersBouquet {
    std::vector<std::string> bouquet;
    bool is_arranged;
    void arrange();
};
```

## 🔄 Message Flow

1. **Chris** initiates the request by calling `orderFlowers` with the desired flowers.
2. The request propagates: `Florist → Wholesaler → Grower → Gardener`.
3. The **Gardener** creates a `FlowersBouquet`, populates it with the requested flowers, and sets `is_arranged = false`.
4. The bouquet is returned back up the chain: `Gardener → Grower → Wholesaler → Florist`.
5. The **Florist** forwards the bouquet to the **FlowerArranger**, which arranges it (`is_arranged = true`) and returns it.
6. The **Florist** hands the arranged bouquet to the **DeliveryPerson**, who delivers it to **Robin**.
7. **Robin** accepts the flowers, completing the simulation.

## 🖥️ Sample Output

```
Chris orders flowers to Robin from Florist Fred: Roses, Violets, Gladiolus.
Florist Fred forwards request to Wholesaler Watson.
Wholesaler Watson forwards the request to Grower Gray.
Grower Gray forwards the request to Gardener Garett.
Gardener Garett prepares flowers.
Gardener Garett returns flowers to Grower Gray.
Grower Gray returns flowers to Wholesaler Watson.
Wholesaler Watson returns flowers to Florist Fred.
Florist Fred request flowers arrangement from Flower Arranger Flora.
Flower Arranger Flora arranges flowers.
Flower Arranger Flora returns arranged flowers to Florist Fred.
Florist Fred forwards flowers to Delivery Person Dylan.
Delivery Person Dylan delivers flowers Robin.
Robin accepts the flowers: Roses, Violets, Gladiolus.
```

## 🎯 Design Principles

This project emphasizes several core OOP concepts:

- **Message passing** — objects communicate exclusively by invoking each other's public methods, never by reaching into internal state.
- **Instances & initialization** — each object holds references to its collaborators (its "servers"), set up during construction.
- **Encapsulation** — object names are never hard-coded into messages; they are retrieved via getters, keeping classes decoupled from one another's internals.
- **Class hierarchy** — common behavior (e.g., holding a name, accepting flowers) is factored into shared base classes where appropriate, rather than duplicated.
- **Manual memory management** — all heap-allocated objects (bouquets, agents) are explicitly released with `delete`.

## 🛠️ Build & Run

This is a standard C++ console application (developed as a Visual Studio solution).

**Using Visual Studio:**
1. Open the `.sln` file in Visual Studio.
2. Build the solution (Ctrl+Shift+B).
3. Run (F5 / Ctrl+F5).

**Using g++ (Linux/macOS):**
```bash
g++ -std=c++17 -o florist_sim *.cpp
./florist_sim
```

## 📁 Project Structure

```
.
├── DeliveryPerson.cpp
├── DeliveryPerson.h
├── Florist.cpp
├── Florist.h
├── FlowerArranger.cpp
├── FlowerArranger.h
├── FlowerBouquet.cpp
├── FlowersBouquet.h
├── Gardener.cpp
├── Gardener.h
├── Grower.cpp
├── Grower.h
├── Main.cpp
├── Person.cpp
├── person.h
├── Wholesaler.cpp
├── Wholesaler.h
└── README.md
```

## 👥 Authors

Submitted as a pair assignment for *Principles of Object-Oriented Programming*.

## 📄 License

This project was created for academic purposes as part of a university course assignment.
