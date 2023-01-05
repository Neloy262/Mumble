		

#include <emmintrin.h>
		
		int main() {
			double a = 0.8;
double b = 0.5;
_mm_add_pd(_mm_loadu_pd(&a), _mm_loadu_pd(&b));
			
			return 0;
		}