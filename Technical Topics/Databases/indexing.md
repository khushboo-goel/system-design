# Indexing in Databases:

### Need to Index:
Disk stores data in form of `Blocks`. When we want to read any row of the database, we need to read the entire block and then find the record that we were looking for. 


This becomes extremely costly while running a query. While running a query, we would read all rows (hence all blocks) sequentially and then create an output. The runtime in such a case will be linear O(n), which can be expensive in case of large datasets like HDFS.


### What is an Index ?
Indexes here refers to a small referencial table that contains a reference to a certain row, based on the value chosen to create the index.
For instance if we use date as an index, your referential table will contain dates and these dates will point to the group of records that contains that particular date.

Indexes are also stored a a serialised table on the disk. They take much lesser space and reduces the query time.

### How does Index reduces query time ?
When we have index (assume index in created on the field which you want to query), we will go through the index table first and find which rows corresponds to the query. Once we have that, we only need to find those rows and return them in query. This reduces the time by reading limited records (blocks) from the main database.
