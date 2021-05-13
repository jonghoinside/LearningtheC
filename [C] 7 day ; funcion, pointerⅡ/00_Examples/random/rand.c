static int seed = 1;

void my_srand(int mySeed) {			// function definition
	seed = mySeed;
}

int my_rand(void) {
	seed = seed * 1103515245 + 12345;
	return ((unsigned int)(seed / 65536) % 32768);
}
