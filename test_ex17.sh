#!/bin/bash
set -e

echo "Creating database ..."
./ex17 db.dat c
echo ""

echo "Saving zed, frank, joe to database ..."
./ex17 db.dat s 1 zed zed@zedshaw.com
./ex17 db.dat s 2 frank frank@zedshaw.com
./ex17 db.dat s 3 joe joe@zedshaw.com
echo ""

echo "Printing all records ..."
./ex17 db.dat l
echo ""

echo "Deleting record by id 3 ..."
./ex17 db.dat d 3
echo ""

echo "Pring all records ..."
./ex17 db.dat l
echo ""

echo "Getting record by id 2 ..."
./ex17 db.dat g 2
echo ""

echo "Finding record by name ..."
./ex17 db.dat f name zed
echo ""

echo "Finding record by email ..."
./ex17 db.dat f email frank@zedshaw.com
echo ""
