#!/usr/bin/env python

from subprocess import call

try:
    name = 'a' * 555
    command = ['./ex17', 'db.dat', 's', '4', name, 'shaqsnake@gmail.com']

    call(command)
except Exception, e:
    print(e)
