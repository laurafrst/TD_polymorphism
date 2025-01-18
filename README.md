# **Polymorphism: Hands-On**

## **Project Overview**  
This project explores **polymorphism in C++**, focusing on class inheritance, virtual functions, and dynamic behavior. 
The goal was to implement a base `Character` class and extend it with `Mario` and `Yoshi`, each with distinct behavior.  

The project follows a structured approach:  
1. Implementing a base class `Character`.  
2. Introducing a **pure virtual function** to enforce polymorphic behavior.  
3. Creating subclasses `Mario` and `Yoshi` with overridden methods.  
4. Overriding acceleration behavior for different characters.  
5. Using STL containers to demonstrate polymorphism in action.  
6. Managing dynamic memory for `Yoshi`'s crest count and ensuring no memory leaks.  

---

## **1) Implementing the `Character` class**  
I first implemented a base class `Character` with:  
- A **private data member** `float speed_` representing the current speed.  
- A **static data member** `float max_speed_`, initialized to `10.0`.  
- A **default constructor** initializing `speed_` to `0.0`.  
- A **member function** `void Accelerate()` that increases `speed_` by `1.0` (up to `max_speed_`).  
- A **member function** `void Break()` that decreases `speed_` by `1.0` (down to `0.0`).  
- A **getter function** `auto speed() const -> decltype(speed_);` returning the speed.  
- A **destructor** to manage cleanup.  

I also created **unit tests** to verify basic functionalities of acceleration, braking, and speed retrieval.  

---

## **2) Adding a Pure Virtual Function (`WhatAmI()`)**  
To enforce polymorphism, I added the following pure virtual function in `Character`:  

```cpp
virtual std::string WhatAmI() const = 0;
```

### **Consequences of This Addition**  
1. **`Character` Becomes an Abstract Class**  
   - `Character` **can no longer be instantiated directly**.  
   - Any attempt to create an object of `Character` will cause a **compile-time error**:  
     ```cpp
     Character c; // Error: Cannot instantiate an abstract class.
     ```

2. **Subclasses (`Mario` and `Yoshi`) Must Implement `WhatAmI()`**  
   - Since `WhatAmI()` is a **pure virtual function**, `Mario` and `Yoshi` **must** implement it.  
   - Otherwise, they also remain **abstract** and cannot be instantiated.  
   - Implementation examples:  
     ```cpp
     std::string Mario::WhatAmI() const override {
         return "Mario";
     }

     std::string Yoshi::WhatAmI() const override {
         return "Yoshi";
     }
     ```

3. **Polymorphism in Action**  
   - With `WhatAmI()` marked as **virtual**, calling it on a `Character*` will invoke the correct overridden version at runtime:  
     ```cpp
     Character* c1 = new Mario();
     Character* c2 = new Yoshi();

     std::cout << c1->WhatAmI(); // Output: "Mario"
     std::cout << c2->WhatAmI(); // Output: "Yoshi"

     delete c1;
     delete c2;
     ```
   - Similarly, I can use **references** to achieve the same behavior:  
     ```cpp
     void DisplayCharacterType(const Character& character) {
         std::cout << character.WhatAmI() << std::endl;
     }

     Mario mario;
     Yoshi yoshi;

     DisplayCharacterType(mario); // Output: "Mario"
     DisplayCharacterType(yoshi); // Output: "Yoshi"
     ```

4. **Impact on STL Containers**  
   - Thanks to polymorphism, I can store multiple types of `Character` objects in a single STL container (e.g., `std::vector<Character*>`).  
   - This allows for dynamic behavior within loops and algorithms.  

### **Key Benefits of Using a Pure Virtual Function**  
- **Encapsulation & Maintainability:** Forces a unified interface for all `Character` subclasses.  
- **Extensibility:** Future characters (e.g., `Luigi`) can be added seamlessly without modifying base class logic.  
- **Runtime Flexibility:** Enables dynamic dispatch via pointers/references, improving the code’s adaptability.  

---

## **3) Extending `Character`: Implementing `Mario` and `Yoshi`**  
After making `Character` abstract, I implemented `Mario` and `Yoshi`, both inheriting from `Character`.  
Each subclass overrides `WhatAmI()` to return a specific string (`"Mario"` or `"Yoshi"`).  

```cpp
class Mario : public Character {
public:
    std::string WhatAmI() const override;
};
```
```cpp
std::string Mario::WhatAmI() const {
    return "Mario";
}
```
A similar approach was used for `Yoshi`.

---

## **4) Overriding `Accelerate()`**  
To reflect that **Yoshis are faster than Marios**, I **overrode `Accelerate()`** in `Yoshi` to make it accelerate twice faster:  

```cpp
void Yoshi::Accelerate() {
    if (speed() < maxSpeed()) {
        // Yoshi accelerates faster (by 2 instead of 1)
        setSpeed(speed() + 2);
    }
}
```
Mario, on the other hand, retains the default acceleration (`+1` per call).  

### **Testing the Acceleration Difference**  
I created a test file `tests_4.cpp` to confirm that **Yoshi accelerates faster than Mario** using STL containers and iteration.  

---

## **5) Let the Race Begin: Using STL Containers**  
To demonstrate **polymorphism with STL**, I stored `Mario` and `Yoshi` objects in a `std::vector<Character*>` and looped over them using iterators and range-based for loops.  

```cpp
std::vector<Character*> racers;
racers.push_back(new Mario());
racers.push_back(new Yoshi());

for (Character* racer : racers) {
    racer->Accelerate();
    std::cout << racer->WhatAmI() << " speed: " << racer->speed() << std::endl;
}
```
The main.cpp file compilation showed that **Yoshis accelerate faster than Marios**, confirming the correct override of `Accelerate()`.

---

## **6) Managing Dynamic Memory: Yoshi’s Crest Count**  
Each Yoshi has a **dynamic memory-allocated crest count**, requiring careful memory management.  

---

## **Conclusion**  
This project provided hands-on experience with **polymorphism in C++**, covering abstract classes, virtual functions, function overriding, dynamic memory management, and STL integration. By enforcing a structured inheritance hierarchy, we can built a flexible and extensible character system that allows for dynamic behavior at runtime.

