# Factory Method Pattern
Define the interface to create the object, however let the subclass decide which class to instantiate.

In this example the ```Factory``` class has the virtual ```create()``` which is implemented by the ```ToyFactory```.
Later, the ```main.cxx``` uses this concrete factory to make the objects.

Note that in my example, the ```ToyFactory``` is the Concrete Creator and there is no Creator class.

## Credits:
### The logging library: plog
https://github.com/SergiusTheBest/plog

## Read also:
https://refactoring.guru/design-patterns/factory-method
