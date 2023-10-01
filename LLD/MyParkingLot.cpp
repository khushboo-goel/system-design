// Question is inside the video:

class Car {
	private:
		string regNo;
		string color;
	public:
		car(string color, string gegNo) {
			this.color = color;
			this.regNo = regNo;
		}
};

class Slot {
	private:
		int slotId;
		bool isAssigned;
		Car carParked;
	public:
		slot(int id) {
			this.slotId = id;
			this.isAssigned = false;
		};

		void assignCar(Car car) {
			this.carParked = car;
			this.isAssigned = true;
		}

		void emptySlot() {
			this.carParked = NULL;
			this.isAssigned = false;
		}

}

// creating this as singleton class since there will only be one parking lot
class ParkingLot {
	private:
		static int n;
		static vector<Slot> slots(n);
		static ParkingLot* PL;

	public:
		static ParkingLot* getPLInstance() {
			return slots;
		}

		vector<string> listCars(string color) {
			vector<string> list;

			for (int i = 0; i < n; i++) {
				if (slots[i] -> isAssigned == true && slots[i] -> carParked -> color == color) {
					list.push_back(slots[i] -> carParked -> regNo);
				}
			}

			return list;
		}

		vector<string> listSlots(string color) {
			vector<string> list;

				for (int i = 0; i < n; i++) {
					if (slots[i] -> isAssigned == true && slots[i] -> carParked -> color == color) {
						list.push_back(slots[i] -> slotId);
					}
				}

			return list;
		}

		map<string, string> regNoForSlot() {
			map<string, string> mp;
			for (int i = 0; i < n; i++) {
				if (slots[i] -> isAssigned == true) {
					list[slots[i] -> carParked -> regNo] = slots[i] -> carParked -> color;
				}
			}

			return mp;
		}
		void assignCarToSlot(Car car) {
			int vacantSlot = -1;

			for (int i = 0; i < n; i++) {
				if (slots[i] -> isAssigned == false) {
					vacantSlot = i;
					break;
				}
			}

			if (vacantSlot == -1) {
				// throw the error
			} else {
				this.slots[vacantSlot].assignCar(car);
			}
			return;
		}

		void emptyPLSlot(int n) {
			this.slots[n].emptySlot();
			return;
		}
}
