void convertToBinary(unsigned int n)
{
	if (n / 2 != 0) {
		convertToBinary(n / 2);
	}
	printf("%d", n % 2);
}
