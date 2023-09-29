# UML Diagrams for LLD

This is essentially creating a class diagram of the feature. Different classes and relationships between them.

### Basics:
1. Create a box with a stripe on top. Label it as className.
2. Divide the rest of section into two parts, one for attributes and another for methods.
3. + : public member, - : private member and # : protected member.
4. For functions, mention the name, input params, their types and function's return type.
5. For static members, underline the name.

### Relations:
1. Associations: Class A can call class B and vice versa. If relation is directional like A can call be but not vice versa, use arrow from A to B. If bi-directional, use a line.
    1. Use numbers on line/arrow to denote 1-1 or many-1 or any numerical relationship.
    2. For any number, use '*'.
    3. For range, use n1 ... n2.
    4. Top of association relations, Role can also be mentioned.
2. Aggregations: Both aggregation and composition is a `has-a` relationship. That means A has an instance of B and B can exist without A. Denoted by empty Diamond.
3. Compositions: This also has a `has-a` relationship (can also be called a `part-of` relationship). Denoted by filled Diamond. In this, if A has an instance of B, B cannot exist without A.
4. Inheritance: This a `is-a` relationship. Use solid line with big arrow at end. For interfaces, use dotted line with big arrow.
    
