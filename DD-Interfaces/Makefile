all: TablasDeConversion
	./TablasDeConversion

TablasDeConversion: TablasDeConversion.c Conversion.c
	gcc TablasDeConversion.c Conversion.c -o  TablasDeConversion

runTests: ConversionTest
		./ConversionTest

ConversionTest: ConversionTest.c Conversion.c
	gcc ConversionTest.c Conversion.c -o ConversionTest