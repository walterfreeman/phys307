import numpy as np

dt=1e-4
drawinterval=300
frame=0
theta=0

while True: 
    theta=theta+1e-4
   
    # only draw a frame every drawinterval steps
    if (frame % drawinterval == 0):
        x=L*np.sin(theta)
        y=-L*np.cos(theta)
        print ("l",0,0,x,y)
        print ("c",x,y,0.05)
        print ("F")
    frame=frame+1
