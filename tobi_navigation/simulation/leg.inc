define leg model
(

 block( 
    points 12
    point[0] [ 0.5 0 ] 
    point[1] [ 0.375 0.25 ] 
    point[2] [ 0.25 0.375 ] 
    point[3] [ 0 0.5 ]
    point[4] [ -0.25 0.375 ]
    point[5] [ -0.375 0.25 ]  
    point[6] [ -0.5 0 ]
    point[7] [ -0.375 -0.25 ]  
    point[8] [ -0.25 -0.375 ] 
    point[9] [ 0 -0.5]
    point[10] [ 0.25 -0.375 ] 
    point[11] [ 0.375 -0.25 ] 
    z [0 0.5]
  )
 
 size [0.15 0.15 0.5]

) 

define person model
(
 block( 
    points 12
    point[0] [ 0.5 0 ] 
    point[1] [ 0.375 0.25 ] 
    point[2] [ 0.25 0.375 ] 
    point[3] [ 0 0.5 ]
    point[4] [ -0.25 0.375 ]
    point[5] [ -0.375 0.25 ]  
    point[6] [ -0.5 0 ]
    point[7] [ -0.375 -0.25 ]  
    point[8] [ -0.25 -0.375 ] 
    point[9] [ 0 -0.5]
    point[10] [ 0.25 -0.375 ] 
    point[11] [ 0.375 -0.25 ] 
    z [0 0.5]
    )
    
    block( 
    points 12
    point[0] [ 3 0 ] 
    point[1] [ 2.875 0.25 ] 
    point[2] [ 2.75 0.375 ] 
    point[3] [ 2.5 0.5 ]
    point[4] [ 2.25 0.375 ]
    point[5] [ 2.125 0.25 ]  
    point[6] [ 2 0 ]
    point[7] [ 2.125 -0.25 ]  
    point[8] [ 2.25 -0.375 ] 
    point[9] [ 2.5 -0.5]
    point[10] [ 2.75 -0.375 ] 
    point[11] [ 2.875 -0.25 ] 
    z [0 0.5]
  )

 size [0.4 0.15 1]
) 
