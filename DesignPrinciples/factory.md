# Factory Design Strategy
1. In factory design, we need to design and implemement the logic in such a way that the scalability and extensibility is encapsulated in a single function so that the client using that class doesnt have to be bothered in case more objects and classes are added.
2. This is useful in the case where the changes in one code piece forces other to change their pattern as well.


Lets take a look with an example:
1. Assume that we need to extend a functionality to some other team to create vehicles for a store.
2. We know that we can have multiple vehicles, car, bike, truck etc.
3. Now in order to create scalability in the system, we will create an interface of the vehicle class and extend that interface to two objects, lets assume, bike and car.
```
  class vehicle {
  	public:
  		virtual void createVehicle() = 0;
  }
  
  class bike: public vehicle {
  	public:
  		void createVehicle(string type) {
  			cout << "Creating Bike" << endl;
  		}
  }
  
  class car: public vehicle {
  	public:
  		void createVehicle(string type) {
  			cout << "Creating Car" << endl;
  		}
  }
```

4. Now the client will have to check types in their code and call different vehicles separately. In case we want to add more functionality, we need to ask user to update their code as well.
```
   int main() {
  	string type;
  	cin >> type
  
  	vehicle* newVehicle;
  	if (type == "car") {
  		newVehicle = new Car();
  	} else if (type == "bike") {
  		newVehicle = new Bike();
  	} else {
  		cout << "Wrong type. Exit." << endl
  		return 0;
  	}
  
  	newVehicle -> createVehicle(type);
  	return 0;
   }
```

5. Factory design suggests that we encapsulate this vehicle selection from user and create a separate class in our code.
```
class vehicleFactory {
	public:
		static void createVehicleFactory(string type) {
			vehicle* newVehicle;
			if (type == "car") {
				newVehicle = new Car();
			} else if (type == "bike") {
				newVehicle = new Bike();
			}

			newVehicle -> createVehicle(type);
			return;
		}
}

int main() {
	string type;
	cin >> type

	vehicleFactory* vF = new vehicleFactory(type);
	return 0;
}
```
