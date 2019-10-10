from numpy import *

pos = array([1,0,0])
vel = array([0,2*pi,0])
G = 4*pi**2

dt = 0.01

while True:
  pos = pos + vel * dt/2
  vel = vel - G * pos / (linalg.norm(pos)**3) * dt
  pos = pos + vel * dt/2
  
  print ("c3",pos[0],pos[1],pos[2],0.1)
  print ("F")
  
