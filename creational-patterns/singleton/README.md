# Singleton

## Scenario

Imagine you are developing an inventory management system for a bakery. The bakery offers a variety of pastries, including cakes, cookies, and muffins. Each pastry type can have different flavors, such as chocolate, vanilla, and strawberry for cakes; chocolate chip, oatmeal, and peanut butter for cookies; and blueberry, banana nut, and apple cinnamon for muffins.

## Problem

In your application, you need to manage the creation of pastry items dynamically based on customer orders. Each order may request different flavors and quantities of pastries. Directly creating instances of pastry objects in the client code would lead to a complex and error-prone system, especially when handling various pastry types and flavors.

## Solution

To address the problem, you decide to use the Singleton pattern to create a `PastryFactory` responsible for managing the dynamic creation of pastry objects. The Singleton ensures that there is only one instance of the factory throughout the application, providing a global point of access for creating pastries. The factory's responsibility is to create different types of pastries with various flavors based on customer orders, promoting a centralized and maintainable approach to pastry creation in the bakery's inventory management system.