from numpy import *
G = 4*pi**2
pos = array([1.0,0.0,0.0])
vel = array([0.0,2*pi,0.0])
dt = 1e-2
while True:
  pos += vel * dt/2
  vel -= pos*G/(linalg.norm(pos) ** 3) * dt
  pos += vel * dt/2
  print ("C 1 1 0\nc3 0 0 0 0.1\nC 0.3 0.3 1\nct3 0 %e %e %e\nF\n" % (pos[0],pos[1],pos[2]))
