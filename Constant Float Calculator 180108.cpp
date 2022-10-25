#include "stdio.h"
int main ()
{
	const float ErCP = 0.12;
	const float EeCP = 0.11;
	float gajiPokok;
	float jumlahCarumanKWSP;
	printf("minta gaji pokok: ");
	scanf("%f",&gajiPokok);
	jumlahCarumanKWSP = (ErCP * gajiPokok) + (EeCP * gajiPokok);
	printf("jumlah caruman kwsp anda ialah = %.2f", jumlahCarumanKWSP);
	
	const float mD = 0.05;
	float hargaBarang;
	float hargaBaruBarang;
	printf("\n\nminta harga barang: ");
	scanf("%f",&hargaBarang);
	hargaBaruBarang = (hargaBarang) - (hargaBarang * mD);
	printf("harga barang selepas membership discount ialah = %.2f", hargaBaruBarang);
	
	const float gst = 0.06;
	float hargaSebenar;
	float hargaBaru;
	printf("\n\nminta harga barang: ");
	scanf("%f",&hargaSebenar);
	hargaBaru = (hargaSebenar * gst) + (hargaSebenar);
	printf("harga barang selepas gst ialah = %.2f", hargaBaru);
	
	const float bI = 0.04;
	float simpanan;
	float jumlahFaedah;
	printf("\n\nminta simpanan bank: ");
	scanf("%f",&simpanan);
	jumlahFaedah = (simpanan * bI);
	printf("jumlah faedah ialah = %.2f", jumlahFaedah);
	
	const int nZF = 7;
	int bilanganAhliKeluarga;
	int jumlahZakatFitrah;
	printf("\n\nminta bilangan ahli keluarga: ");
	scanf("%d",&bilanganAhliKeluarga);
	jumlahZakatFitrah = (nZF * bilanganAhliKeluarga);
	printf("jumlah zakat fitrah yang dikenakan ialah = %d", jumlahZakatFitrah);
	
	const float pi = 3.142;
	float jejari;
	float lilitanBulatan;
	printf("\n\nminta jejari bulatan: ");
	scanf("%f",&jejari);
	lilitanBulatan = (2 * pi * jejari);
	printf("lilitan bulatan ialah = %.2f", lilitanBulatan);
	return 0;	
}
