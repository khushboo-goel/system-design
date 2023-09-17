# Food Delivery Application
(Based on Video by [Keerti Purswani](https://www.youtube.com/watch?v=XN17WWiUzT4&t=140s))
1. We want to build an application that has multiple interfaces: user to create an order, a restaurant to list menu and prepare food and the delivery partner to
pick the order for restaurant and deliver it to client.

## Restaurant Interface
This will consists of the following components:
1. Food Manager: This module contains the class that enables sharing order with the restaurants. The order can directly be shared with the restaurants so that it can start preparing for the food.
2. Restaurant Manager: This module will be managing the restaurant inventory for the app and will provide the list of restaurants along with their menu.
3. Restaurant: This object contains the details for a particular restaurant like location, menu, is currently serving etc.
4. Menu: Contains the list of food items (might contain add ons in case that is the requirement).



## Delivery Interface:
This will consists of the following components:
1. Delivery Manager: This will contain the information of the order too be delivered in terms of location of users and restaurants.
2. Strategy Manger: In order to find the nearest delivery partner for the food delivery, we need to use different strategies, say based on location, rating etc.
3. Strategies: It is an interface which contains all the delivery partner assigning strategies.
4. Delivery Partner: Much like restuarants, there needs to delivery partner class containing the id of partner, their ratings etc.

