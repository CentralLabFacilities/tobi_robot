define door model
(
block( 
    points 4
    point[0] [ 1.0 0.5 ] 
    point[1] [ 0.0 0.5 ] 
    point[2] [ 0.0 -0.5 ] 
    point[3] [ 1.0 -0.5 ]
    z [0 0.5]
  )
  size [1 0.1 2]
)

define sofa model
(

 block( 
    points 4
    point[0] [ 0.5 0.5 ] 
    point[1] [ -0.5 0.5 ] 
    point[2] [ -0.5 -0.5 ] 
    point[3] [ 0.5 -0.5 ]
    z [0 0.3]
  )

 block( 
    points 4
    point[0] [ 0.5 0.5 ] 
    point[1] [ 0.4 0.5 ] 
    point[2] [ 0.4 -0.5 ] 
    point[3] [ 0.5 -0.5 ]
    z [0.3 0.5]
  )

 block( 
    points 4
    point[0] [ -0.4 0.5 ]    
    point[1] [ -0.5 0.5 ] 
    point[2] [ -0.5 -0.5 ]   
    point[3] [ -0.4 -0.5 ] 

    z [0.3 0.5]
  )

 block( 
    points 4
    point[0] [ 0.5 0.5 ]    
    point[1] [ -0.5 0.5 ] 
    point[2] [ -0.5 0.4 ]   
    point[3] [ 0.5 0.4 ] 

    z [0.3 0.8]
  )

 size [1.5 1 1]
)


define desk model
(
 block( 
    points 4
    point[0] [ 0.5 0.5 ] 
    point[1] [ -0.5 0.5 ] 
    point[2] [ -0.5 -0.5 ] 
    point[3] [ 0.5 -0.5 ]
    z [0 0.75]
  )

 block( 
    points 4
    point[0] [ 0.7 0.7 ] 
    point[1] [ -0.7 0.7 ] 
    point[2] [ -0.7 -0.7 ] 
    point[3] [ 0.7 -0.7 ]
    z [0.75 0.8]
  )

 size [1.5 1 0.5]
)

define bed model
(
  block (
    points 4
    point[0] [0.5 0.5]
    point[1] [-0.5 0.5]
    point[2] [-0.5 -0.5]
    point[3] [0.5 -0.5]
    z [0 0.35]
    color "grey"
  )

  block (
    points 4
    point[0] [0.4 0.4]
    point[1] [-0.4 0.4]
    point[2] [-0.4 -0.4]
    point[3] [0.4 -0.4]
    z [0.35 0.4]
    color "black"
  )

  block (
    points 4
    point[0] [0.52 0.5]
    point[1] [0.5 0.5]
    point[2] [0.5 -0.5]
    point[3] [0.52 -0.5]
    z [0 0.8]
    color "grey"

  )

 size [2.4 2.2 0.9]
)


define rack model
(
 block (
    points 4
    point[0] [0.5 0.8]
    point[1] [0.4 0.8]
    point[2] [0.4 -0.8]
    point[3] [0.5 -0.8]
    z [0 0.7]
  )

 block (
    points 4
    point[0] [-0.4 0.8]
    point[1] [-0.5 0.8]
    point[2] [-0.5 -0.8]
    point[3] [-0.4 -0.8]
    z [0 0.7]
  )

  block (
    points 4
    point[0] [0.9 0.8]
    point[1] [-0.9 0.8]
    point[2] [-0.9 -0.8]
    point[3] [0.9 -0.8]
    z [0.1 0.15]
  )

  block (
    points 4
    point[0] [0.9 0.8]
    point[1] [-0.9 0.8]
    point[2] [-0.9 -0.8]
    point[3] [0.9 -0.8]
    z [0.3 0.35]
  )

  block (
    points 4
    point[0] [0.9 0.8]
    point[1] [-0.9 0.8]
    point[2] [-0.9 -0.8]
    point[3] [0.9 -0.8]
    z [0.5 0.55]
  )
)

define roundtable model
(
 block(
    points 12
    point[0] [ 0.75 0 ]
    point[1] [ 0.5625 0.375 ]
    point[2] [ 0.375 0.5625 ]
    point[3] [ 0 0.75 ]
    point[4] [ -0.375 0.5625 ]
    point[5] [ -0.5625 0.375 ]
    point[6] [ -0.75 0 ]
    point[7] [ -0.5625 -0.375 ]
    point[8] [ -0.375 -0.5625 ]
    point[9] [ 0 -0.75]
    point[10] [ 0.375 -0.5625 ]
    point[11] [ 0.5625 -0.375 ]
    z [0 0.7]
  )
)
define lamp model
(
 block( 
    points 12
    point[0] [ 0.75 0 ] 
    point[1] [ 0.5625 0.375 ] 
    point[2] [ 0.375 0.5625 ] 
    point[3] [ 0 0.75 ]
    point[4] [ -0.375 0.5625 ]
    point[5] [ -0.5625 0.375 ]  
    point[6] [ -0.75 0 ]
    point[7] [ -0.5625 -0.375 ]  
    point[8] [ -0.375 -0.5625 ] 
    point[9] [ 0 -0.75]
    point[10] [ 0.375 -0.5625 ] 
    point[11] [ 0.5625 -0.375 ] 
    z [0 0.1]
    color "grey"
  )

 block( 
    points 12
    point[0] [ 0.25 0 ] 
    point[1] [ 0.1875 0.125 ] 
    point[2] [ 0.125 0.1875 ] 
    point[3] [ 0 0.25 ]
    point[4] [ -0.125 0.1875 ]
    point[5] [ -0.1875 0.125 ]  
    point[6] [ -0.25 0 ]
    point[7] [ -0.1875 -0.125 ]  
    point[8] [ -0.125 -0.1875 ] 
    point[9] [ 0 -0.25]
    point[10] [ 0.125 -0.1875 ] 
    point[11] [ 0.1875 -0.125 ] 
    z [0.1 0.5]
    color "grey"
  )

 block( 
    points 12
    point[0] [ 0.975 0 ] 
    point[1] [ 0.73125 0.4875 ] 
    point[2] [ 0.4875 0.73125 ] 
    point[3] [ 0 0.975 ]
    point[4] [ -0.4875 0.73125 ]
    point[5] [ -0.73125 0.4875 ]  
    point[6] [ -0.975 0 ]
    point[7] [ -0.73125 -0.4875 ]  
    point[8] [ -0.4875 -0.73125 ] 
    point[9] [ 0 -0.975]
    point[10] [ 0.4875 -0.73125 ] 
    point[11] [ 0.73125 -0.4875 ] 
    z [0.5 0.8]
    color "black"
  )
)

