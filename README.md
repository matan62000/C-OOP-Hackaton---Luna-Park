# 🎢 Luna Park Management System

### C++ | Object-Oriented Programming | Final Course Hackathon

A C++ console-based amusement park management system developed as part of our **Object-Oriented Programming (OOP) final course hackathon**.

Built collaboratively by a team of three students, the project demonstrates the practical application of object-oriented design principles through the management of an amusement park and its attractions.

## 🎯 Project Overview

The application simulates an amusement park environment, allowing users to interact with different attractions and facilities through a console-based menu.

The system is organized into multiple C++ classes, representing different park components and their behavior.

## 🎡 Park Components

The project includes classes representing various attractions and facilities:

- **LunaPark** – Main amusement park management class.
- **Facility** – Shared abstraction for park facilities.
- **FerrisWheel** – Ferris wheel attraction.
- **GhostCoaster** – Ghost-themed coaster.
- **LoopCoaster** – Looping roller coaster.
- **Coaster** – Roller coaster component.
- **BumperCars** – Bumper car attraction.
- **Steakhouse** – Dining facility.
- **Restaurant** – Restaurant component.
- **Dairy** – Dairy dining facility.
- **Asian** – Asian dining facility.
- **Tubing** – Tubing attraction.

## 🧠 Object-Oriented Programming Concepts

The project focuses on several important C++ concepts:

- **Inheritance** – Creating relationships between base and derived classes.
- **Polymorphism** – Supporting different facility types through common interfaces.
- **Encapsulation** – Organizing data and behavior within classes.
- **Abstraction** – Designing reusable interfaces for park components.
- **Constructors & Destructors** – Managing object initialization and lifetime.
- **Modular Programming** – Separating class declarations and implementations into header and source files.

## 🛠️ Technologies

- **Programming Language:** C++
- **Development Environment:** JetBrains CLion
- **Build System:** CMake
- **Version Control:** Git & GitHub

## 📁 Project Structure

```text
LunaPark/
├── main.cpp
├── LunaPark.h / .cpp
├── Facility.h / .cpp
├── Coaster.h / .cpp
├── LoopCoaster.h / .cpp
├── GhostCoaster.h / .cpp
├── FerrisWheel.h / .cpp
├── BumperCars.h / .cpp
├── Restaurant.h / .cpp
├── Steakhouse.h / .cpp
├── Dairy.h / .cpp
├── Asian.h / .cpp
├── Tubing.h / .cpp
└── CMakeLists.txt
```

## 🚀 Building the Project

The project uses CMake for building.

```bash
cmake -S . -B build
cmake --build build
```

Run the generated executable from the build directory.

## 💡 Learning Outcomes

This hackathon provided practical experience in:

- Designing and implementing a multi-class C++ application.
- Applying inheritance and polymorphism.
- Integrating multiple software components.
- Debugging and solving programming challenges.
- Collaborating under time constraints.
- Developing a complete project as a team.

## 👨‍💻 Development Team

Developed as part of our Object-Oriented Programming final hackathon by:

- **Matan Buhbut**
- **Omer Golan**
- **Daniel Edri**

Three Software Engineering students working together to apply OOP principles in a practical C++ project.

## 🎓 Academic Context

**Project Type:** Final OOP Course Hackathon

**Field:** Software Engineering

**Language:** C++