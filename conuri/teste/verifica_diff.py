from sh import cp, rm, diff, ErrorReturnCode
import sh
import os

SURSA_VERIFICATA = 'conuri-robert.cpp'

cp('../' + SURSA_VERIFICATA, '.')
os.system('g++ ' + SURSA_VERIFICATA)

filename = 'grader_test'
for i in range(1, 11):
  print 'Testul ', i
  cp(filename + str(i) + '.in', 'conuri.in')
  os.system('./a.out')
  print diff('conuri.out', filename + str(i) + '.ok', _ok_code=[0, 1])

for extension in ['in', 'out']:
  rm('conuri.' + extension)
rm(SURSA_VERIFICATA)
rm('a.out')
