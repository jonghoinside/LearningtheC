int getSerialNumber(void) {
	static int serial = 0;
	return ++serial;
}
