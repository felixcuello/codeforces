g++ $1.cc -o $1

cat /app/$1.in | ./$1 > /app/$1.tmp
