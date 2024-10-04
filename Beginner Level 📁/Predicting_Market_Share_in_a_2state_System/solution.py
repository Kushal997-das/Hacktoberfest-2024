def matrix_factorization_2state(E0, M0, time_periods):
  def g(E0, M0, time_periods):
    
    T = [[0.5, 0.5],[0.25, 0.75]]
    A = E0
    B = M0
  
    for i in range(time_periods):
      new_A = T[0][0] * A + T[0][1] * B
      new_B = T[1][0] * A + T[1][1] * B
    
      A, B = new_A, new_B
    
      print(f"After iteration {i+1}: E = {A:.4f}, M = {B:.4f}")
  
    return A,B
    
  A, B = g(E0, M0, time_periods)
  print(f"Final market shares after {time_periods} iterations:")
  print(f"Region A = {A:.4f}, Region B = {B:.4f}")

matrix_factorization_2state(0.6,0.4,10)