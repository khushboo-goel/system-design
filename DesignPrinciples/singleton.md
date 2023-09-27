# Singleton Design Pattern
This is extensively used at places where only one instance of a class is needed like configuration manager, logger etc.

Lets take an example of logger. For a logger class, we would only want to create one instance so that no two users, threads can create multiple instances.

Things to take care while using singleton design pattern.
1. In order to make the instantiation inaccessible to the user, we would make the constructor and function overloading private.
2. We need to create an instance of the class ourselves and let the user use that instance.
3. 
