public class Problem003{

  public static void main(String[] args) {
      long bigPFactor;

      final long TEST_NUMBER = 600851475143L;

      bigPFactor = TEST_NUMBER;

      for(long x = 1L; x*x <= TEST_NUMBER/2; x+=2L) {
        if(isPrime(x) && TEST_NUMBER % x == 0L) {
          bigPFactor = x;
        }
      }
      System.out.print(bigPFactor);

    }

  public static boolean isPrime(long val) {
      for(long x = 3L; x*x < val; x+=2L) {
        if(val % x == 0L) {
          return false;
        }
      }
      return true;
      }
	}

}
