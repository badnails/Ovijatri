#include "iGraphics.h"

#include <mmsystem.h>
#include <windows.h>
#include <stdlib.h>

#include <time.h>
#pragma comment(lib, "Winmm.lib")

typedef struct
{
	char place[20];
	char tm[10];
	char dater[20];
	char gwr[20];
} wish;
void filecreate();
int ndate = 0, id = 0, ngw = 0, ingw = 0;
char date[20], gw[20];

wish wx;
wish pt[30];

int acr = 0;
int a, b, nres;
int auth = -1;
int check();

int x = 300, y = 300, r = 20;
/*
	function iDraw() is called again and again by the system.

	*/
int ind = 0, bx = 0, by = 500, px = 0, py = 0;

int vidi = 0;

char vid[475][60] = {"LI\\video\\frame00001.jpg", "LI\\video\\frame00002.jpg", "LI\\video\\frame00003.jpg", "LI\\video\\frame00004.jpg", "LI\\video\\frame00005.jpg", "LI\\video\\frame00006.jpg", "LI\\video\\frame00007.jpg", "LI\\video\\frame00008.jpg", "LI\\video\\frame00009.jpg", "LI\\video\\frame00010.jpg", "LI\\video\\frame00011.jpg", "LI\\video\\frame00012.jpg", "LI\\video\\frame00013.jpg", "LI\\video\\frame00014.jpg", "LI\\video\\frame00015.jpg", "LI\\video\\frame00016.jpg", "LI\\video\\frame00017.jpg", "LI\\video\\frame00018.jpg", "LI\\video\\frame00019.jpg", "LI\\video\\frame00020.jpg", "LI\\video\\frame00021.jpg", "LI\\video\\frame00022.jpg", "LI\\video\\frame00023.jpg", "LI\\video\\frame00024.jpg", "LI\\video\\frame00025.jpg", "LI\\video\\frame00026.jpg", "LI\\video\\frame00027.jpg", "LI\\video\\frame00028.jpg", "LI\\video\\frame00029.jpg", "LI\\video\\frame00030.jpg", "LI\\video\\frame00031.jpg", "LI\\video\\frame00032.jpg", "LI\\video\\frame00033.jpg", "LI\\video\\frame00034.jpg", "LI\\video\\frame00035.jpg", "LI\\video\\frame00036.jpg", "LI\\video\\frame00037.jpg", "LI\\video\\frame00038.jpg", "LI\\video\\frame00039.jpg", "LI\\video\\frame00040.jpg", "LI\\video\\frame00041.jpg", "LI\\video\\frame00042.jpg", "LI\\video\\frame00043.jpg", "LI\\video\\frame00044.jpg", "LI\\video\\frame00045.jpg", "LI\\video\\frame00046.jpg", "LI\\video\\frame00047.jpg", "LI\\video\\frame00048.jpg", "LI\\video\\frame00049.jpg", "LI\\video\\frame00050.jpg",
					 "LI\\video\\frame00051.jpg", "LI\\video\\frame00052.jpg", "LI\\video\\frame00053.jpg", "LI\\video\\frame00054.jpg", "LI\\video\\frame00055.jpg", "LI\\video\\frame00056.jpg", "LI\\video\\frame00057.jpg", "LI\\video\\frame00058.jpg", "LI\\video\\frame00059.jpg", "LI\\video\\frame00060.jpg", "LI\\video\\frame00061.jpg", "LI\\video\\frame00062.jpg", "LI\\video\\frame00063.jpg", "LI\\video\\frame00064.jpg", "LI\\video\\frame00065.jpg", "LI\\video\\frame00066.jpg", "LI\\video\\frame00067.jpg", "LI\\video\\frame00068.jpg", "LI\\video\\frame00069.jpg", "LI\\video\\frame00070.jpg", "LI\\video\\frame00071.jpg", "LI\\video\\frame00072.jpg", "LI\\video\\frame00073.jpg", "LI\\video\\frame00074.jpg", "LI\\video\\frame00075.jpg", "LI\\video\\frame00076.jpg", "LI\\video\\frame00077.jpg", "LI\\video\\frame00078.jpg", "LI\\video\\frame00079.jpg", "LI\\video\\frame00080.jpg", "LI\\video\\frame00081.jpg", "LI\\video\\frame00082.jpg", "LI\\video\\frame00083.jpg", "LI\\video\\frame00084.jpg", "LI\\video\\frame00085.jpg", "LI\\video\\frame00086.jpg", "LI\\video\\frame00087.jpg", "LI\\video\\frame00088.jpg", "LI\\video\\frame00089.jpg", "LI\\video\\frame00090.jpg", "LI\\video\\frame00091.jpg", "LI\\video\\frame00092.jpg", "LI\\video\\frame00093.jpg", "LI\\video\\frame00094.jpg", "LI\\video\\frame00095.jpg", "LI\\video\\frame00096.jpg", "LI\\video\\frame00097.jpg", "LI\\video\\frame00098.jpg", "LI\\video\\frame00099.jpg",
					 "LI\\video\\frame00100.jpg", "LI\\video\\frame00101.jpg", "LI\\video\\frame00102.jpg", "LI\\video\\frame00103.jpg", "LI\\video\\frame00104.jpg", "LI\\video\\frame00105.jpg", "LI\\video\\frame00106.jpg", "LI\\video\\frame00107.jpg", "LI\\video\\frame00108.jpg", "LI\\video\\frame00109.jpg", "LI\\video\\frame00110.jpg", "LI\\video\\frame00111.jpg", "LI\\video\\frame00112.jpg", "LI\\video\\frame00113.jpg", "LI\\video\\frame00114.jpg", "LI\\video\\frame00115.jpg", "LI\\video\\frame00116.jpg", "LI\\video\\frame00117.jpg", "LI\\video\\frame00118.jpg", "LI\\video\\frame00119.jpg", "LI\\video\\frame00120.jpg", "LI\\video\\frame00121.jpg", "LI\\video\\frame00122.jpg", "LI\\video\\frame00123.jpg", "LI\\video\\frame00124.jpg", "LI\\video\\frame00125.jpg", "LI\\video\\frame00126.jpg", "LI\\video\\frame00127.jpg", "LI\\video\\frame00128.jpg", "LI\\video\\frame00129.jpg", "LI\\video\\frame00130.jpg", "LI\\video\\frame00131.jpg", "LI\\video\\frame00132.jpg", "LI\\video\\frame00133.jpg", "LI\\video\\frame00134.jpg", "LI\\video\\frame00135.jpg", "LI\\video\\frame00136.jpg", "LI\\video\\frame00137.jpg", "LI\\video\\frame00138.jpg", "LI\\video\\frame00139.jpg", "LI\\video\\frame00140.jpg", "LI\\video\\frame00141.jpg", "LI\\video\\frame00142.jpg", "LI\\video\\frame00143.jpg", "LI\\video\\frame00144.jpg", "LI\\video\\frame00145.jpg", "LI\\video\\frame00146.jpg", "LI\\video\\frame00147.jpg", "LI\\video\\frame00148.jpg", "LI\\video\\frame00149.jpg",
					 "LI\\video\\frame00150.jpg", "LI\\video\\frame00151.jpg", "LI\\video\\frame00152.jpg", "LI\\video\\frame00153.jpg", "LI\\video\\frame00154.jpg", "LI\\video\\frame00155.jpg", "LI\\video\\frame00156.jpg", "LI\\video\\frame00157.jpg", "LI\\video\\frame00158.jpg", "LI\\video\\frame00159.jpg", "LI\\video\\frame00160.jpg", "LI\\video\\frame00161.jpg", "LI\\video\\frame00162.jpg", "LI\\video\\frame00163.jpg", "LI\\video\\frame00164.jpg", "LI\\video\\frame00165.jpg", "LI\\video\\frame00166.jpg", "LI\\video\\frame00167.jpg", "LI\\video\\frame00168.jpg", "LI\\video\\frame00169.jpg", "LI\\video\\frame00170.jpg", "LI\\video\\frame00171.jpg", "LI\\video\\frame00172.jpg", "LI\\video\\frame00173.jpg", "LI\\video\\frame00174.jpg", "LI\\video\\frame00175.jpg", "LI\\video\\frame00176.jpg", "LI\\video\\frame00177.jpg", "LI\\video\\frame00178.jpg", "LI\\video\\frame00179.jpg", "LI\\video\\frame00180.jpg", "LI\\video\\frame00181.jpg", "LI\\video\\frame00182.jpg", "LI\\video\\frame00183.jpg", "LI\\video\\frame00184.jpg", "LI\\video\\frame00185.jpg", "LI\\video\\frame00186.jpg", "LI\\video\\frame00187.jpg", "LI\\video\\frame00188.jpg", "LI\\video\\frame00189.jpg", "LI\\video\\frame00190.jpg", "LI\\video\\frame00191.jpg", "LI\\video\\frame00192.jpg", "LI\\video\\frame00193.jpg", "LI\\video\\frame00194.jpg", "LI\\video\\frame00195.jpg", "LI\\video\\frame00196.jpg", "LI\\video\\frame00197.jpg", "LI\\video\\frame00198.jpg", "LI\\video\\frame00199.jpg",
					 "LI\\video\\frame00200.jpg", "LI\\video\\frame00201.jpg", "LI\\video\\frame00202.jpg", "LI\\video\\frame00203.jpg", "LI\\video\\frame00204.jpg", "LI\\video\\frame00205.jpg", "LI\\video\\frame00206.jpg", "LI\\video\\frame00207.jpg", "LI\\video\\frame00208.jpg", "LI\\video\\frame00209.jpg", "LI\\video\\frame00210.jpg", "LI\\video\\frame00211.jpg", "LI\\video\\frame00212.jpg", "LI\\video\\frame00213.jpg", "LI\\video\\frame00214.jpg", "LI\\video\\frame00215.jpg", "LI\\video\\frame00216.jpg", "LI\\video\\frame00217.jpg", "LI\\video\\frame00218.jpg", "LI\\video\\frame00219.jpg", "LI\\video\\frame00220.jpg", "LI\\video\\frame00221.jpg", "LI\\video\\frame00222.jpg", "LI\\video\\frame00223.jpg", "LI\\video\\frame00224.jpg", "LI\\video\\frame00225.jpg", "LI\\video\\frame00226.jpg", "LI\\video\\frame00227.jpg", "LI\\video\\frame00228.jpg", "LI\\video\\frame00229.jpg", "LI\\video\\frame00230.jpg", "LI\\video\\frame00231.jpg", "LI\\video\\frame00232.jpg", "LI\\video\\frame00233.jpg", "LI\\video\\frame00234.jpg", "LI\\video\\frame00235.jpg", "LI\\video\\frame00236.jpg", "LI\\video\\frame00237.jpg", "LI\\video\\frame00238.jpg", "LI\\video\\frame00239.jpg", "LI\\video\\frame00240.jpg", "LI\\video\\frame00241.jpg", "LI\\video\\frame00242.jpg", "LI\\video\\frame00243.jpg", "LI\\video\\frame00244.jpg", "LI\\video\\frame00245.jpg", "LI\\video\\frame00246.jpg", "LI\\video\\frame00247.jpg", "LI\\video\\frame00248.jpg", "LI\\video\\frame00249.jpg",
					 "LI\\video\\frame00250.jpg", "LI\\video\\frame00251.jpg", "LI\\video\\frame00252.jpg", "LI\\video\\frame00253.jpg", "LI\\video\\frame00254.jpg", "LI\\video\\frame00255.jpg", "LI\\video\\frame00256.jpg", "LI\\video\\frame00257.jpg", "LI\\video\\frame00258.jpg", "LI\\video\\frame00259.jpg", "LI\\video\\frame00260.jpg", "LI\\video\\frame00261.jpg", "LI\\video\\frame00262.jpg", "LI\\video\\frame00263.jpg", "LI\\video\\frame00264.jpg", "LI\\video\\frame00265.jpg", "LI\\video\\frame00266.jpg", "LI\\video\\frame00267.jpg", "LI\\video\\frame00268.jpg", "LI\\video\\frame00269.jpg", "LI\\video\\frame00270.jpg", "LI\\video\\frame00271.jpg", "LI\\video\\frame00272.jpg", "LI\\video\\frame00273.jpg", "LI\\video\\frame00274.jpg", "LI\\video\\frame00275.jpg", "LI\\video\\frame00276.jpg", "LI\\video\\frame00277.jpg", "LI\\video\\frame00278.jpg", "LI\\video\\frame00279.jpg", "LI\\video\\frame00280.jpg", "LI\\video\\frame00281.jpg", "LI\\video\\frame00282.jpg", "LI\\video\\frame00283.jpg", "LI\\video\\frame00284.jpg", "LI\\video\\frame00285.jpg", "LI\\video\\frame00286.jpg", "LI\\video\\frame00287.jpg", "LI\\video\\frame00288.jpg", "LI\\video\\frame00289.jpg", "LI\\video\\frame00290.jpg", "LI\\video\\frame00291.jpg", "LI\\video\\frame00292.jpg", "LI\\video\\frame00293.jpg", "LI\\video\\frame00294.jpg", "LI\\video\\frame00295.jpg", "LI\\video\\frame00296.jpg", "LI\\video\\frame00297.jpg", "LI\\video\\frame00298.jpg", "LI\\video\\frame00299.jpg",
					 "LI\\video\\frame00300.jpg", "LI\\video\\frame00301.jpg", "LI\\video\\frame00302.jpg", "LI\\video\\frame00303.jpg", "LI\\video\\frame00304.jpg", "LI\\video\\frame00305.jpg", "LI\\video\\frame00306.jpg", "LI\\video\\frame00307.jpg", "LI\\video\\frame00308.jpg", "LI\\video\\frame00309.jpg", "LI\\video\\frame00310.jpg", "LI\\video\\frame00311.jpg", "LI\\video\\frame00312.jpg", "LI\\video\\frame00313.jpg", "LI\\video\\frame00314.jpg", "LI\\video\\frame00315.jpg", "LI\\video\\frame00316.jpg", "LI\\video\\frame00317.jpg", "LI\\video\\frame00318.jpg", "LI\\video\\frame00319.jpg", "LI\\video\\frame00320.jpg", "LI\\video\\frame00321.jpg", "LI\\video\\frame00322.jpg", "LI\\video\\frame00323.jpg", "LI\\video\\frame00324.jpg", "LI\\video\\frame00325.jpg", "LI\\video\\frame00326.jpg", "LI\\video\\frame00327.jpg", "LI\\video\\frame00328.jpg", "LI\\video\\frame00329.jpg", "LI\\video\\frame00330.jpg", "LI\\video\\frame00331.jpg", "LI\\video\\frame00332.jpg", "LI\\video\\frame00333.jpg", "LI\\video\\frame00334.jpg", "LI\\video\\frame00335.jpg", "LI\\video\\frame00336.jpg", "LI\\video\\frame00337.jpg", "LI\\video\\frame00338.jpg", "LI\\video\\frame00339.jpg", "LI\\video\\frame00340.jpg", "LI\\video\\frame00341.jpg", "LI\\video\\frame00342.jpg", "LI\\video\\frame00343.jpg", "LI\\video\\frame00344.jpg", "LI\\video\\frame00345.jpg", "LI\\video\\frame00346.jpg", "LI\\video\\frame00347.jpg", "LI\\video\\frame00348.jpg", "LI\\video\\frame00349.jpg",
					 "LI\\video\\frame00350.jpg", "LI\\video\\frame00351.jpg", "LI\\video\\frame00352.jpg", "LI\\video\\frame00353.jpg", "LI\\video\\frame00354.jpg", "LI\\video\\frame00355.jpg", "LI\\video\\frame00356.jpg", "LI\\video\\frame00357.jpg", "LI\\video\\frame00358.jpg", "LI\\video\\frame00359.jpg", "LI\\video\\frame00360.jpg", "LI\\video\\frame00361.jpg", "LI\\video\\frame00362.jpg", "LI\\video\\frame00363.jpg", "LI\\video\\frame00364.jpg", "LI\\video\\frame00365.jpg", "LI\\video\\frame00366.jpg", "LI\\video\\frame00367.jpg", "LI\\video\\frame00368.jpg", "LI\\video\\frame00369.jpg", "LI\\video\\frame00370.jpg", "LI\\video\\frame00371.jpg", "LI\\video\\frame00372.jpg", "LI\\video\\frame00373.jpg", "LI\\video\\frame00374.jpg", "LI\\video\\frame00375.jpg", "LI\\video\\frame00376.jpg", "LI\\video\\frame00377.jpg", "LI\\video\\frame00378.jpg", "LI\\video\\frame00379.jpg", "LI\\video\\frame00380.jpg", "LI\\video\\frame00381.jpg", "LI\\video\\frame00382.jpg", "LI\\video\\frame00383.jpg", "LI\\video\\frame00384.jpg", "LI\\video\\frame00385.jpg", "LI\\video\\frame00386.jpg", "LI\\video\\frame00387.jpg", "LI\\video\\frame00388.jpg", "LI\\video\\frame00389.jpg", "LI\\video\\frame00390.jpg", "LI\\video\\frame00391.jpg", "LI\\video\\frame00392.jpg", "LI\\video\\frame00393.jpg", "LI\\video\\frame00394.jpg", "LI\\video\\frame00395.jpg", "LI\\video\\frame00396.jpg", "LI\\video\\frame00397.jpg", "LI\\video\\frame00398.jpg", "LI\\video\\frame00399.jpg",
					 "LI\\video\\frame00400.jpg", "LI\\video\\frame00401.jpg", "LI\\video\\frame00402.jpg", "LI\\video\\frame00403.jpg", "LI\\video\\frame00404.jpg", "LI\\video\\frame00405.jpg", "LI\\video\\frame00406.jpg", "LI\\video\\frame00407.jpg", "LI\\video\\frame00408.jpg", "LI\\video\\frame00409.jpg", "LI\\video\\frame00410.jpg", "LI\\video\\frame00411.jpg", "LI\\video\\frame00412.jpg", "LI\\video\\frame00413.jpg", "LI\\video\\frame00414.jpg", "LI\\video\\frame00415.jpg", "LI\\video\\frame00416.jpg", "LI\\video\\frame00417.jpg", "LI\\video\\frame00418.jpg", "LI\\video\\frame00419.jpg", "LI\\video\\frame00420.jpg", "LI\\video\\frame00421.jpg", "LI\\video\\frame00422.jpg", "LI\\video\\frame00423.jpg", "LI\\video\\frame00424.jpg", "LI\\video\\frame00425.jpg", "LI\\video\\frame00426.jpg", "LI\\video\\frame00427.jpg", "LI\\video\\frame00428.jpg", "LI\\video\\frame00429.jpg", "LI\\video\\frame00430.jpg", "LI\\video\\frame00431.jpg", "LI\\video\\frame00432.jpg", "LI\\video\\frame00433.jpg", "LI\\video\\frame00434.jpg", "LI\\video\\frame00435.jpg", "LI\\video\\frame00436.jpg", "LI\\video\\frame00437.jpg", "LI\\video\\frame00438.jpg", "LI\\video\\frame00439.jpg", "LI\\video\\frame00440.jpg", "LI\\video\\frame00441.jpg", "LI\\video\\frame00442.jpg", "LI\\video\\frame00443.jpg", "LI\\video\\frame00444.jpg", "LI\\video\\frame00445.jpg", "LI\\video\\frame00446.jpg", "LI\\video\\frame00447.jpg", "LI\\video\\frame00448.jpg", "LI\\video\\frame00449.jpg",
					 "LI\\video\\frame00450.jpg", "LI\\video\\frame00451.jpg", "LI\\video\\frame00452.jpg", "LI\\video\\frame00453.jpg", "LI\\video\\frame00454.jpg", "LI\\video\\frame00455.jpg", "LI\\video\\frame00456.jpg", "LI\\video\\frame00457.jpg", "LI\\video\\frame00458.jpg", "LI\\video\\frame00459.jpg", "LI\\video\\frame00460.jpg", "LI\\video\\frame00461.jpg", "LI\\video\\frame00462.jpg", "LI\\video\\frame00463.jpg", "LI\\video\\frame00464.jpg", "LI\\video\\frame00465.jpg", "LI\\video\\frame00466.jpg", "LI\\video\\frame00467.jpg", "LI\\video\\frame00468.jpg", "LI\\video\\frame00469.jpg", "LI\\video\\frame00470.jpg", "LI\\video\\frame00471.jpg", "LI\\video\\frame00472.jpg", "LI\\video\\frame00473.jpg", "LI\\video\\frame00474.jpg", "LI\\video\\frame00475.jpg"};

char dhakaVid[433][50] = {"LI\\video\\dhaka\\frame00813.jpg", "LI\\video\\dhaka\\frame00815.jpg", "LI\\video\\dhaka\\frame00817.jpg", "LI\\video\\dhaka\\frame00819.jpg", "LI\\video\\dhaka\\frame00821.jpg", "LI\\video\\dhaka\\frame00823.jpg", "LI\\video\\dhaka\\frame00825.jpg", "LI\\video\\dhaka\\frame00827.jpg", "LI\\video\\dhaka\\frame00829.jpg", "LI\\video\\dhaka\\frame00831.jpg", "LI\\video\\dhaka\\frame00833.jpg", "LI\\video\\dhaka\\frame00835.jpg", "LI\\video\\dhaka\\frame00837.jpg", "LI\\video\\dhaka\\frame00839.jpg", "LI\\video\\dhaka\\frame00841.jpg", "LI\\video\\dhaka\\frame00843.jpg", "LI\\video\\dhaka\\frame00845.jpg", "LI\\video\\dhaka\\frame00847.jpg", "LI\\video\\dhaka\\frame00849.jpg", "LI\\video\\dhaka\\frame00851.jpg", "LI\\video\\dhaka\\frame00853.jpg", "LI\\video\\dhaka\\frame00855.jpg", "LI\\video\\dhaka\\frame00857.jpg", "LI\\video\\dhaka\\frame00859.jpg", "LI\\video\\dhaka\\frame00861.jpg", "LI\\video\\dhaka\\frame00863.jpg",
						  "LI\\video\\dhaka\\frame00865.jpg", "LI\\video\\dhaka\\frame00867.jpg", "LI\\video\\dhaka\\frame00869.jpg", "LI\\video\\dhaka\\frame00871.jpg", "LI\\video\\dhaka\\frame00873.jpg", "LI\\video\\dhaka\\frame00875.jpg", "LI\\video\\dhaka\\frame00877.jpg", "LI\\video\\dhaka\\frame00879.jpg", "LI\\video\\dhaka\\frame00881.jpg", "LI\\video\\dhaka\\frame00883.jpg", "LI\\video\\dhaka\\frame00885.jpg", "LI\\video\\dhaka\\frame00887.jpg", "LI\\video\\dhaka\\frame00889.jpg", "LI\\video\\dhaka\\frame00891.jpg", "LI\\video\\dhaka\\frame00893.jpg", "LI\\video\\dhaka\\frame00895.jpg", "LI\\video\\dhaka\\frame00897.jpg", "LI\\video\\dhaka\\frame00899.jpg", "LI\\video\\dhaka\\frame00901.jpg", "LI\\video\\dhaka\\frame00903.jpg", "LI\\video\\dhaka\\frame00905.jpg", "LI\\video\\dhaka\\frame00907.jpg", "LI\\video\\dhaka\\frame00909.jpg", "LI\\video\\dhaka\\frame00911.jpg", "LI\\video\\dhaka\\frame00913.jpg",
						  "LI\\video\\dhaka\\frame00915.jpg", "LI\\video\\dhaka\\frame00917.jpg", "LI\\video\\dhaka\\frame00919.jpg", "LI\\video\\dhaka\\frame00921.jpg", "LI\\video\\dhaka\\frame00923.jpg", "LI\\video\\dhaka\\frame00925.jpg", "LI\\video\\dhaka\\frame00927.jpg", "LI\\video\\dhaka\\frame00929.jpg", "LI\\video\\dhaka\\frame00931.jpg", "LI\\video\\dhaka\\frame00933.jpg", "LI\\video\\dhaka\\frame00935.jpg", "LI\\video\\dhaka\\frame00937.jpg", "LI\\video\\dhaka\\frame00939.jpg", "LI\\video\\dhaka\\frame00941.jpg", "LI\\video\\dhaka\\frame00943.jpg", "LI\\video\\dhaka\\frame00945.jpg", "LI\\video\\dhaka\\frame00947.jpg", "LI\\video\\dhaka\\frame00949.jpg", "LI\\video\\dhaka\\frame00951.jpg", "LI\\video\\dhaka\\frame00953.jpg", "LI\\video\\dhaka\\frame00955.jpg", "LI\\video\\dhaka\\frame00957.jpg", "LI\\video\\dhaka\\frame00959.jpg", "LI\\video\\dhaka\\frame00961.jpg", "LI\\video\\dhaka\\frame00963.jpg",
						  "LI\\video\\dhaka\\frame00965.jpg", "LI\\video\\dhaka\\frame00967.jpg", "LI\\video\\dhaka\\frame00969.jpg", "LI\\video\\dhaka\\frame00971.jpg", "LI\\video\\dhaka\\frame00973.jpg", "LI\\video\\dhaka\\frame00975.jpg", "LI\\video\\dhaka\\frame00977.jpg", "LI\\video\\dhaka\\frame00979.jpg", "LI\\video\\dhaka\\frame00981.jpg", "LI\\video\\dhaka\\frame00983.jpg", "LI\\video\\dhaka\\frame00985.jpg", "LI\\video\\dhaka\\frame00987.jpg", "LI\\video\\dhaka\\frame00989.jpg", "LI\\video\\dhaka\\frame00991.jpg", "LI\\video\\dhaka\\frame00993.jpg", "LI\\video\\dhaka\\frame00995.jpg", "LI\\video\\dhaka\\frame00997.jpg", "LI\\video\\dhaka\\frame00999.jpg", "LI\\video\\dhaka\\frame01001.jpg", "LI\\video\\dhaka\\frame01003.jpg", "LI\\video\\dhaka\\frame01005.jpg", "LI\\video\\dhaka\\frame01007.jpg", "LI\\video\\dhaka\\frame01009.jpg", "LI\\video\\dhaka\\frame01011.jpg", "LI\\video\\dhaka\\frame01013.jpg",
						  "LI\\video\\dhaka\\frame01015.jpg", "LI\\video\\dhaka\\frame01017.jpg", "LI\\video\\dhaka\\frame01019.jpg", "LI\\video\\dhaka\\frame01021.jpg", "LI\\video\\dhaka\\frame01023.jpg", "LI\\video\\dhaka\\frame01025.jpg", "LI\\video\\dhaka\\frame01027.jpg", "LI\\video\\dhaka\\frame01029.jpg", "LI\\video\\dhaka\\frame01031.jpg", "LI\\video\\dhaka\\frame01033.jpg", "LI\\video\\dhaka\\frame01035.jpg", "LI\\video\\dhaka\\frame01037.jpg", "LI\\video\\dhaka\\frame01039.jpg", "LI\\video\\dhaka\\frame01041.jpg", "LI\\video\\dhaka\\frame01043.jpg", "LI\\video\\dhaka\\frame01045.jpg", "LI\\video\\dhaka\\frame01047.jpg", "LI\\video\\dhaka\\frame01049.jpg", "LI\\video\\dhaka\\frame01051.jpg", "LI\\video\\dhaka\\frame01053.jpg", "LI\\video\\dhaka\\frame01055.jpg", "LI\\video\\dhaka\\frame01057.jpg", "LI\\video\\dhaka\\frame01059.jpg", "LI\\video\\dhaka\\frame01061.jpg", "LI\\video\\dhaka\\frame01063.jpg",
						  "LI\\video\\dhaka\\frame01065.jpg", "LI\\video\\dhaka\\frame01067.jpg", "LI\\video\\dhaka\\frame01069.jpg", "LI\\video\\dhaka\\frame01071.jpg", "LI\\video\\dhaka\\frame01073.jpg", "LI\\video\\dhaka\\frame01075.jpg", "LI\\video\\dhaka\\frame01077.jpg", "LI\\video\\dhaka\\frame01079.jpg", "LI\\video\\dhaka\\frame01081.jpg", "LI\\video\\dhaka\\frame01083.jpg", "LI\\video\\dhaka\\frame01085.jpg", "LI\\video\\dhaka\\frame01087.jpg", "LI\\video\\dhaka\\frame01089.jpg", "LI\\video\\dhaka\\frame01091.jpg", "LI\\video\\dhaka\\frame01093.jpg", "LI\\video\\dhaka\\frame01095.jpg", "LI\\video\\dhaka\\frame01097.jpg", "LI\\video\\dhaka\\frame01099.jpg", "LI\\video\\dhaka\\frame01101.jpg", "LI\\video\\dhaka\\frame01103.jpg", "LI\\video\\dhaka\\frame01105.jpg", "LI\\video\\dhaka\\frame01107.jpg", "LI\\video\\dhaka\\frame01109.jpg", "LI\\video\\dhaka\\frame01111.jpg", "LI\\video\\dhaka\\frame01113.jpg", "LI\\video\\dhaka\\frame01115.jpg", "LI\\video\\dhaka\\frame01117.jpg", "LI\\video\\dhaka\\frame01119.jpg", "LI\\video\\dhaka\\frame01121.jpg", "LI\\video\\dhaka\\frame01123.jpg", "LI\\video\\dhaka\\frame01125.jpg", "LI\\video\\dhaka\\frame01127.jpg", "LI\\video\\dhaka\\frame01129.jpg", "LI\\video\\dhaka\\frame01131.jpg", "LI\\video\\dhaka\\frame01133.jpg", "LI\\video\\dhaka\\frame01135.jpg", "LI\\video\\dhaka\\frame01137.jpg", "LI\\video\\dhaka\\frame01139.jpg", "LI\\video\\dhaka\\frame01141.jpg", "LI\\video\\dhaka\\frame01143.jpg", "LI\\video\\dhaka\\frame01145.jpg", "LI\\video\\dhaka\\frame01147.jpg", "LI\\video\\dhaka\\frame01149.jpg", "LI\\video\\dhaka\\frame01151.jpg", "LI\\video\\dhaka\\frame01153.jpg", "LI\\video\\dhaka\\frame01155.jpg", "LI\\video\\dhaka\\frame01157.jpg", "LI\\video\\dhaka\\frame01159.jpg", "LI\\video\\dhaka\\frame01161.jpg", "LI\\video\\dhaka\\frame01163.jpg",
						  "LI\\video\\dhaka\\frame01165.jpg", "LI\\video\\dhaka\\frame01167.jpg", "LI\\video\\dhaka\\frame01169.jpg", "LI\\video\\dhaka\\frame01171.jpg", "LI\\video\\dhaka\\frame01173.jpg", "LI\\video\\dhaka\\frame01175.jpg", "LI\\video\\dhaka\\frame01177.jpg", "LI\\video\\dhaka\\frame01179.jpg", "LI\\video\\dhaka\\frame01181.jpg", "LI\\video\\dhaka\\frame01183.jpg", "LI\\video\\dhaka\\frame01185.jpg", "LI\\video\\dhaka\\frame01187.jpg", "LI\\video\\dhaka\\frame01189.jpg", "LI\\video\\dhaka\\frame01191.jpg", "LI\\video\\dhaka\\frame01193.jpg", "LI\\video\\dhaka\\frame01195.jpg", "LI\\video\\dhaka\\frame01197.jpg", "LI\\video\\dhaka\\frame01199.jpg", "LI\\video\\dhaka\\frame01201.jpg", "LI\\video\\dhaka\\frame01203.jpg", "LI\\video\\dhaka\\frame01205.jpg", "LI\\video\\dhaka\\frame01207.jpg", "LI\\video\\dhaka\\frame01209.jpg", "LI\\video\\dhaka\\frame01211.jpg", "LI\\video\\dhaka\\frame01213.jpg", "LI\\video\\dhaka\\frame01215.jpg", "LI\\video\\dhaka\\frame01217.jpg", "LI\\video\\dhaka\\frame01219.jpg", "LI\\video\\dhaka\\frame01221.jpg", "LI\\video\\dhaka\\frame01223.jpg", "LI\\video\\dhaka\\frame01225.jpg", "LI\\video\\dhaka\\frame01227.jpg", "LI\\video\\dhaka\\frame01229.jpg", "LI\\video\\dhaka\\frame01231.jpg", "LI\\video\\dhaka\\frame01233.jpg", "LI\\video\\dhaka\\frame01235.jpg", "LI\\video\\dhaka\\frame01237.jpg", "LI\\video\\dhaka\\frame01239.jpg", "LI\\video\\dhaka\\frame01241.jpg", "LI\\video\\dhaka\\frame01243.jpg", "LI\\video\\dhaka\\frame01245.jpg", "LI\\video\\dhaka\\frame01247.jpg", "LI\\video\\dhaka\\frame01249.jpg", "LI\\video\\dhaka\\frame01251.jpg", "LI\\video\\dhaka\\frame01253.jpg", "LI\\video\\dhaka\\frame01255.jpg", "LI\\video\\dhaka\\frame01257.jpg", "LI\\video\\dhaka\\frame01259.jpg", "LI\\video\\dhaka\\frame01261.jpg", "LI\\video\\dhaka\\frame01263.jpg",
						  "LI\\video\\dhaka\\frame01265.jpg", "LI\\video\\dhaka\\frame01267.jpg", "LI\\video\\dhaka\\frame01269.jpg", "LI\\video\\dhaka\\frame01271.jpg", "LI\\video\\dhaka\\frame01273.jpg", "LI\\video\\dhaka\\frame01275.jpg", "LI\\video\\dhaka\\frame01277.jpg", "LI\\video\\dhaka\\frame01279.jpg", "LI\\video\\dhaka\\frame01281.jpg", "LI\\video\\dhaka\\frame01283.jpg", "LI\\video\\dhaka\\frame01285.jpg", "LI\\video\\dhaka\\frame01287.jpg", "LI\\video\\dhaka\\frame01289.jpg", "LI\\video\\dhaka\\frame01291.jpg", "LI\\video\\dhaka\\frame01293.jpg", "LI\\video\\dhaka\\frame01295.jpg", "LI\\video\\dhaka\\frame01297.jpg", "LI\\video\\dhaka\\frame01299.jpg", "LI\\video\\dhaka\\frame01301.jpg", "LI\\video\\dhaka\\frame01303.jpg", "LI\\video\\dhaka\\frame01305.jpg", "LI\\video\\dhaka\\frame01307.jpg", "LI\\video\\dhaka\\frame01309.jpg", "LI\\video\\dhaka\\frame01311.jpg", "LI\\video\\dhaka\\frame01313.jpg", "LI\\video\\dhaka\\frame01315.jpg", "LI\\video\\dhaka\\frame01317.jpg", "LI\\video\\dhaka\\frame01319.jpg", "LI\\video\\dhaka\\frame01321.jpg", "LI\\video\\dhaka\\frame01323.jpg", "LI\\video\\dhaka\\frame01325.jpg", "LI\\video\\dhaka\\frame01327.jpg", "LI\\video\\dhaka\\frame01329.jpg", "LI\\video\\dhaka\\frame01331.jpg", "LI\\video\\dhaka\\frame01333.jpg", "LI\\video\\dhaka\\frame01335.jpg", "LI\\video\\dhaka\\frame01337.jpg", "LI\\video\\dhaka\\frame01339.jpg", "LI\\video\\dhaka\\frame01341.jpg", "LI\\video\\dhaka\\frame01343.jpg", "LI\\video\\dhaka\\frame01345.jpg", "LI\\video\\dhaka\\frame01347.jpg", "LI\\video\\dhaka\\frame01349.jpg", "LI\\video\\dhaka\\frame01351.jpg", "LI\\video\\dhaka\\frame01353.jpg", "LI\\video\\dhaka\\frame01355.jpg", "LI\\video\\dhaka\\frame01357.jpg", "LI\\video\\dhaka\\frame01359.jpg", "LI\\video\\dhaka\\frame01361.jpg", "LI\\video\\dhaka\\frame01363.jpg",
						  "LI\\video\\dhaka\\frame01365.jpg", "LI\\video\\dhaka\\frame01367.jpg", "LI\\video\\dhaka\\frame01369.jpg", "LI\\video\\dhaka\\frame01371.jpg", "LI\\video\\dhaka\\frame01373.jpg", "LI\\video\\dhaka\\frame01375.jpg", "LI\\video\\dhaka\\frame01377.jpg", "LI\\video\\dhaka\\frame01379.jpg", "LI\\video\\dhaka\\frame01381.jpg", "LI\\video\\dhaka\\frame01383.jpg", "LI\\video\\dhaka\\frame01385.jpg", "LI\\video\\dhaka\\frame01387.jpg", "LI\\video\\dhaka\\frame01389.jpg", "LI\\video\\dhaka\\frame01391.jpg", "LI\\video\\dhaka\\frame01393.jpg", "LI\\video\\dhaka\\frame01395.jpg", "LI\\video\\dhaka\\frame01397.jpg", "LI\\video\\dhaka\\frame01399.jpg", "LI\\video\\dhaka\\frame01401.jpg", "LI\\video\\dhaka\\frame01403.jpg", "LI\\video\\dhaka\\frame01405.jpg", "LI\\video\\dhaka\\frame01407.jpg", "LI\\video\\dhaka\\frame01409.jpg", "LI\\video\\dhaka\\frame01411.jpg", "LI\\video\\dhaka\\frame01413.jpg", "LI\\video\\dhaka\\frame01415.jpg", "LI\\video\\dhaka\\frame01417.jpg", "LI\\video\\dhaka\\frame01419.jpg", "LI\\video\\dhaka\\frame01421.jpg", "LI\\video\\dhaka\\frame01423.jpg", "LI\\video\\dhaka\\frame01425.jpg", "LI\\video\\dhaka\\frame01427.jpg", "LI\\video\\dhaka\\frame01429.jpg", "LI\\video\\dhaka\\frame01431.jpg", "LI\\video\\dhaka\\frame01433.jpg", "LI\\video\\dhaka\\frame01435.jpg", "LI\\video\\dhaka\\frame01437.jpg", "LI\\video\\dhaka\\frame01439.jpg", "LI\\video\\dhaka\\frame01441.jpg", "LI\\video\\dhaka\\frame01443.jpg", "LI\\video\\dhaka\\frame01445.jpg", "LI\\video\\dhaka\\frame01447.jpg", "LI\\video\\dhaka\\frame01449.jpg", "LI\\video\\dhaka\\frame01451.jpg", "LI\\video\\dhaka\\frame01453.jpg", "LI\\video\\dhaka\\frame01455.jpg", "LI\\video\\dhaka\\frame01457.jpg", "LI\\video\\dhaka\\frame01459.jpg", "LI\\video\\dhaka\\frame01461.jpg", "LI\\video\\dhaka\\frame01463.jpg",
						  "LI\\video\\dhaka\\frame01465.jpg", "LI\\video\\dhaka\\frame01467.jpg", "LI\\video\\dhaka\\frame01469.jpg", "LI\\video\\dhaka\\frame01471.jpg", "LI\\video\\dhaka\\frame01473.jpg", "LI\\video\\dhaka\\frame01475.jpg", "LI\\video\\dhaka\\frame01477.jpg", "LI\\video\\dhaka\\frame01479.jpg", "LI\\video\\dhaka\\frame01481.jpg", "LI\\video\\dhaka\\frame01483.jpg", "LI\\video\\dhaka\\frame01485.jpg", "LI\\video\\dhaka\\frame01487.jpg", "LI\\video\\dhaka\\frame01489.jpg", "LI\\video\\dhaka\\frame01491.jpg", "LI\\video\\dhaka\\frame01493.jpg", "LI\\video\\dhaka\\frame01495.jpg", "LI\\video\\dhaka\\frame01497.jpg", "LI\\video\\dhaka\\frame01499.jpg", "LI\\video\\dhaka\\frame01501.jpg", "LI\\video\\dhaka\\frame01503.jpg", "LI\\video\\dhaka\\frame01505.jpg", "LI\\video\\dhaka\\frame01507.jpg", "LI\\video\\dhaka\\frame01509.jpg", "LI\\video\\dhaka\\frame01511.jpg", "LI\\video\\dhaka\\frame01513.jpg", "LI\\video\\dhaka\\frame01515.jpg", "LI\\video\\dhaka\\frame01517.jpg", "LI\\video\\dhaka\\frame01519.jpg", "LI\\video\\dhaka\\frame01521.jpg", "LI\\video\\dhaka\\frame01523.jpg", "LI\\video\\dhaka\\frame01525.jpg", "LI\\video\\dhaka\\frame01527.jpg", "LI\\video\\dhaka\\frame01529.jpg", "LI\\video\\dhaka\\frame01531.jpg", "LI\\video\\dhaka\\frame01533.jpg", "LI\\video\\dhaka\\frame01535.jpg", "LI\\video\\dhaka\\frame01537.jpg", "LI\\video\\dhaka\\frame01539.jpg", "LI\\video\\dhaka\\frame01541.jpg", "LI\\video\\dhaka\\frame01543.jpg", "LI\\video\\dhaka\\frame01545.jpg", "LI\\video\\dhaka\\frame01547.jpg", "LI\\video\\dhaka\\frame01549.jpg", "LI\\video\\dhaka\\frame01551.jpg", "LI\\video\\dhaka\\frame01553.jpg", "LI\\video\\dhaka\\frame01555.jpg", "LI\\video\\dhaka\\frame01557.jpg", "LI\\video\\dhaka\\frame01559.jpg", "LI\\video\\dhaka\\frame01561.jpg", "LI\\video\\dhaka\\frame01563.jpg",
						  "LI\\video\\dhaka\\frame01565.jpg", "LI\\video\\dhaka\\frame01567.jpg", "LI\\video\\dhaka\\frame01569.jpg", "LI\\video\\dhaka\\frame01571.jpg", "LI\\video\\dhaka\\frame01573.jpg", "LI\\video\\dhaka\\frame01575.jpg", "LI\\video\\dhaka\\frame01577.jpg", "LI\\video\\dhaka\\frame01579.jpg", "LI\\video\\dhaka\\frame01581.jpg", "LI\\video\\dhaka\\frame01583.jpg", "LI\\video\\dhaka\\frame01585.jpg", "LI\\video\\dhaka\\frame01587.jpg", "LI\\video\\dhaka\\frame01589.jpg", "LI\\video\\dhaka\\frame01591.jpg", "LI\\video\\dhaka\\frame01593.jpg", "LI\\video\\dhaka\\frame01595.jpg", "LI\\video\\dhaka\\frame01597.jpg", "LI\\video\\dhaka\\frame01599.jpg", "LI\\video\\dhaka\\frame01601.jpg", "LI\\video\\dhaka\\frame01603.jpg", "LI\\video\\dhaka\\frame01605.jpg", "LI\\video\\dhaka\\frame01607.jpg", "LI\\video\\dhaka\\frame01609.jpg", "LI\\video\\dhaka\\frame01611.jpg", "LI\\video\\dhaka\\frame01613.jpg", "LI\\video\\dhaka\\frame01615.jpg", "LI\\video\\dhaka\\frame01617.jpg", "LI\\video\\dhaka\\frame01619.jpg", "LI\\video\\dhaka\\frame01621.jpg", "LI\\video\\dhaka\\frame01623.jpg", "LI\\video\\dhaka\\frame01625.jpg", "LI\\video\\dhaka\\frame01627.jpg", "LI\\video\\dhaka\\frame01629.jpg", "LI\\video\\dhaka\\frame01631.jpg", "LI\\video\\dhaka\\frame01633.jpg", "LI\\video\\dhaka\\frame01635.jpg", "LI\\video\\dhaka\\frame01637.jpg", "LI\\video\\dhaka\\frame01639.jpg", "LI\\video\\dhaka\\frame01641.jpg", "LI\\video\\dhaka\\frame01643.jpg", "LI\\video\\dhaka\\frame01645.jpg", "LI\\video\\dhaka\\frame01647.jpg", "LI\\video\\dhaka\\frame01649.jpg", "LI\\video\\dhaka\\frame01651.jpg", "LI\\video\\dhaka\\frame01653.jpg", "LI\\video\\dhaka\\frame01655.jpg", "LI\\video\\dhaka\\frame01657.jpg", "LI\\video\\dhaka\\frame01659.jpg", "LI\\video\\dhaka\\frame01661.jpg", "LI\\video\\dhaka\\frame01663.jpg",
						  "LI\\video\\dhaka\\frame01665.jpg", "LI\\video\\dhaka\\frame01667.jpg", "LI\\video\\dhaka\\frame01669.jpg", "LI\\video\\dhaka\\frame01671.jpg", "LI\\video\\dhaka\\frame01673.jpg", "LI\\video\\dhaka\\frame01675.jpg", "LI\\video\\dhaka\\frame01677.jpg"};

char rajvid[582][50] = {"LI\\video\\raj\\frame00001.jpg", "LI\\video\\raj\\frame00006.jpg", "LI\\video\\raj\\frame00011.jpg", "LI\\video\\raj\\frame00016.jpg", "LI\\video\\raj\\frame00021.jpg", "LI\\video\\raj\\frame00026.jpg", "LI\\video\\raj\\frame00031.jpg", "LI\\video\\raj\\frame00036.jpg", "LI\\video\\raj\\frame00041.jpg", "LI\\video\\raj\\frame00046.jpg", "LI\\video\\raj\\frame00051.jpg", "LI\\video\\raj\\frame00056.jpg", "LI\\video\\raj\\frame00061.jpg", "LI\\video\\raj\\frame00066.jpg", "LI\\video\\raj\\frame00071.jpg", "LI\\video\\raj\\frame00076.jpg", "LI\\video\\raj\\frame00081.jpg", "LI\\video\\raj\\frame00086.jpg", "LI\\video\\raj\\frame00091.jpg", "LI\\video\\raj\\frame00096.jpg", "LI\\video\\raj\\frame00101.jpg", "LI\\video\\raj\\frame00106.jpg", "LI\\video\\raj\\frame00111.jpg", "LI\\video\\raj\\frame00116.jpg", "LI\\video\\raj\\frame00121.jpg", "LI\\video\\raj\\frame00126.jpg", "LI\\video\\raj\\frame00131.jpg", "LI\\video\\raj\\frame00136.jpg", "LI\\video\\raj\\frame00141.jpg", "LI\\video\\raj\\frame00146.jpg", "LI\\video\\raj\\frame00151.jpg", "LI\\video\\raj\\frame00156.jpg", "LI\\video\\raj\\frame00161.jpg", "LI\\video\\raj\\frame00166.jpg", "LI\\video\\raj\\frame00171.jpg", "LI\\video\\raj\\frame00176.jpg", "LI\\video\\raj\\frame00181.jpg", "LI\\video\\raj\\frame00186.jpg", "LI\\video\\raj\\frame00191.jpg", "LI\\video\\raj\\frame00196.jpg", "LI\\video\\raj\\frame00201.jpg", "LI\\video\\raj\\frame00206.jpg", "LI\\video\\raj\\frame00211.jpg", "LI\\video\\raj\\frame00216.jpg", "LI\\video\\raj\\frame00221.jpg", "LI\\video\\raj\\frame00226.jpg", "LI\\video\\raj\\frame00231.jpg", "LI\\video\\raj\\frame00236.jpg", "LI\\video\\raj\\frame00241.jpg", "LI\\video\\raj\\frame00246.jpg", "LI\\video\\raj\\frame00251.jpg", "LI\\video\\raj\\frame00256.jpg", "LI\\video\\raj\\frame00261.jpg",
						"LI\\video\\raj\\frame00266.jpg", "LI\\video\\raj\\frame00271.jpg", "LI\\video\\raj\\frame00276.jpg", "LI\\video\\raj\\frame00281.jpg", "LI\\video\\raj\\frame00286.jpg", "LI\\video\\raj\\frame00291.jpg", "LI\\video\\raj\\frame00296.jpg", "LI\\video\\raj\\frame00301.jpg", "LI\\video\\raj\\frame00306.jpg", "LI\\video\\raj\\frame00311.jpg", "LI\\video\\raj\\frame00316.jpg", "LI\\video\\raj\\frame00321.jpg", "LI\\video\\raj\\frame00326.jpg", "LI\\video\\raj\\frame00331.jpg", "LI\\video\\raj\\frame00336.jpg", "LI\\video\\raj\\frame00341.jpg", "LI\\video\\raj\\frame00346.jpg", "LI\\video\\raj\\frame00351.jpg", "LI\\video\\raj\\frame00356.jpg", "LI\\video\\raj\\frame00361.jpg", "LI\\video\\raj\\frame00366.jpg", "LI\\video\\raj\\frame00371.jpg", "LI\\video\\raj\\frame00376.jpg", "LI\\video\\raj\\frame00381.jpg", "LI\\video\\raj\\frame00386.jpg", "LI\\video\\raj\\frame00391.jpg", "LI\\video\\raj\\frame00396.jpg", "LI\\video\\raj\\frame00401.jpg", "LI\\video\\raj\\frame00406.jpg", "LI\\video\\raj\\frame00411.jpg", "LI\\video\\raj\\frame00416.jpg", "LI\\video\\raj\\frame00421.jpg", "LI\\video\\raj\\frame00426.jpg", "LI\\video\\raj\\frame00431.jpg", "LI\\video\\raj\\frame00436.jpg", "LI\\video\\raj\\frame00441.jpg", "LI\\video\\raj\\frame00446.jpg", "LI\\video\\raj\\frame00451.jpg", "LI\\video\\raj\\frame00456.jpg", "LI\\video\\raj\\frame00461.jpg", "LI\\video\\raj\\frame00466.jpg", "LI\\video\\raj\\frame00471.jpg", "LI\\video\\raj\\frame00476.jpg", "LI\\video\\raj\\frame00481.jpg", "LI\\video\\raj\\frame00486.jpg", "LI\\video\\raj\\frame00491.jpg", "LI\\video\\raj\\frame00496.jpg", "LI\\video\\raj\\frame00501.jpg", "LI\\video\\raj\\frame00506.jpg", "LI\\video\\raj\\frame00511.jpg", "LI\\video\\raj\\frame00516.jpg", "LI\\video\\raj\\frame00521.jpg", "LI\\video\\raj\\frame00526.jpg", "LI\\video\\raj\\frame00531.jpg",
						"LI\\video\\raj\\frame00536.jpg", "LI\\video\\raj\\frame00541.jpg", "LI\\video\\raj\\frame00546.jpg", "LI\\video\\raj\\frame00551.jpg", "LI\\video\\raj\\frame00556.jpg", "LI\\video\\raj\\frame00561.jpg", "LI\\video\\raj\\frame00566.jpg", "LI\\video\\raj\\frame00571.jpg", "LI\\video\\raj\\frame00576.jpg", "LI\\video\\raj\\frame00581.jpg", "LI\\video\\raj\\frame00586.jpg", "LI\\video\\raj\\frame00591.jpg", "LI\\video\\raj\\frame00596.jpg", "LI\\video\\raj\\frame00601.jpg", "LI\\video\\raj\\frame00606.jpg", "LI\\video\\raj\\frame00611.jpg", "LI\\video\\raj\\frame00616.jpg", "LI\\video\\raj\\frame00621.jpg", "LI\\video\\raj\\frame00626.jpg", "LI\\video\\raj\\frame00631.jpg", "LI\\video\\raj\\frame00636.jpg", "LI\\video\\raj\\frame00641.jpg", "LI\\video\\raj\\frame00646.jpg", "LI\\video\\raj\\frame00651.jpg", "LI\\video\\raj\\frame00656.jpg", "LI\\video\\raj\\frame00661.jpg", "LI\\video\\raj\\frame00666.jpg", "LI\\video\\raj\\frame00671.jpg", "LI\\video\\raj\\frame00676.jpg", "LI\\video\\raj\\frame00681.jpg", "LI\\video\\raj\\frame00686.jpg", "LI\\video\\raj\\frame00691.jpg", "LI\\video\\raj\\frame00696.jpg", "LI\\video\\raj\\frame00701.jpg", "LI\\video\\raj\\frame00706.jpg", "LI\\video\\raj\\frame00711.jpg", "LI\\video\\raj\\frame00716.jpg", "LI\\video\\raj\\frame00721.jpg", "LI\\video\\raj\\frame00726.jpg", "LI\\video\\raj\\frame00731.jpg", "LI\\video\\raj\\frame00736.jpg", "LI\\video\\raj\\frame00741.jpg", "LI\\video\\raj\\frame00746.jpg", "LI\\video\\raj\\frame00751.jpg", "LI\\video\\raj\\frame00756.jpg", "LI\\video\\raj\\frame00761.jpg", "LI\\video\\raj\\frame00766.jpg", "LI\\video\\raj\\frame00771.jpg", "LI\\video\\raj\\frame00776.jpg", "LI\\video\\raj\\frame00781.jpg", "LI\\video\\raj\\frame00786.jpg", "LI\\video\\raj\\frame00791.jpg", "LI\\video\\raj\\frame00796.jpg", "LI\\video\\raj\\frame00801.jpg",
						"LI\\video\\raj\\frame00806.jpg", "LI\\video\\raj\\frame00811.jpg", "LI\\video\\raj\\frame00816.jpg", "LI\\video\\raj\\frame00821.jpg", "LI\\video\\raj\\frame00826.jpg", "LI\\video\\raj\\frame00831.jpg", "LI\\video\\raj\\frame00836.jpg", "LI\\video\\raj\\frame00841.jpg", "LI\\video\\raj\\frame00846.jpg", "LI\\video\\raj\\frame00851.jpg", "LI\\video\\raj\\frame00856.jpg", "LI\\video\\raj\\frame00861.jpg", "LI\\video\\raj\\frame00866.jpg", "LI\\video\\raj\\frame00871.jpg", "LI\\video\\raj\\frame00876.jpg", "LI\\video\\raj\\frame00881.jpg", "LI\\video\\raj\\frame00886.jpg", "LI\\video\\raj\\frame00891.jpg", "LI\\video\\raj\\frame00896.jpg", "LI\\video\\raj\\frame00901.jpg", "LI\\video\\raj\\frame00906.jpg", "LI\\video\\raj\\frame00911.jpg", "LI\\video\\raj\\frame00916.jpg", "LI\\video\\raj\\frame00921.jpg", "LI\\video\\raj\\frame00926.jpg", "LI\\video\\raj\\frame00931.jpg", "LI\\video\\raj\\frame00936.jpg", "LI\\video\\raj\\frame00941.jpg", "LI\\video\\raj\\frame00946.jpg", "LI\\video\\raj\\frame00951.jpg", "LI\\video\\raj\\frame00956.jpg", "LI\\video\\raj\\frame00961.jpg", "LI\\video\\raj\\frame00966.jpg", "LI\\video\\raj\\frame00971.jpg", "LI\\video\\raj\\frame00976.jpg", "LI\\video\\raj\\frame00981.jpg", "LI\\video\\raj\\frame00986.jpg", "LI\\video\\raj\\frame00991.jpg", "LI\\video\\raj\\frame00996.jpg", "LI\\video\\raj\\frame01001.jpg", "LI\\video\\raj\\frame01006.jpg", "LI\\video\\raj\\frame01011.jpg", "LI\\video\\raj\\frame01016.jpg", "LI\\video\\raj\\frame01021.jpg", "LI\\video\\raj\\frame01026.jpg", "LI\\video\\raj\\frame01031.jpg", "LI\\video\\raj\\frame01036.jpg", "LI\\video\\raj\\frame01041.jpg", "LI\\video\\raj\\frame01046.jpg", "LI\\video\\raj\\frame01051.jpg", "LI\\video\\raj\\frame01056.jpg", "LI\\video\\raj\\frame01061.jpg", "LI\\video\\raj\\frame01066.jpg", "LI\\video\\raj\\frame01071.jpg",
						"LI\\video\\raj\\frame01076.jpg", "LI\\video\\raj\\frame01081.jpg", "LI\\video\\raj\\frame01086.jpg", "LI\\video\\raj\\frame01091.jpg", "LI\\video\\raj\\frame01096.jpg", "LI\\video\\raj\\frame01101.jpg", "LI\\video\\raj\\frame01106.jpg", "LI\\video\\raj\\frame01111.jpg", "LI\\video\\raj\\frame01116.jpg", "LI\\video\\raj\\frame01121.jpg", "LI\\video\\raj\\frame01126.jpg", "LI\\video\\raj\\frame01131.jpg", "LI\\video\\raj\\frame01136.jpg", "LI\\video\\raj\\frame01141.jpg", "LI\\video\\raj\\frame01146.jpg", "LI\\video\\raj\\frame01151.jpg", "LI\\video\\raj\\frame01156.jpg", "LI\\video\\raj\\frame01161.jpg", "LI\\video\\raj\\frame01166.jpg", "LI\\video\\raj\\frame01171.jpg", "LI\\video\\raj\\frame01176.jpg", "LI\\video\\raj\\frame01181.jpg", "LI\\video\\raj\\frame01186.jpg", "LI\\video\\raj\\frame01191.jpg", "LI\\video\\raj\\frame01196.jpg", "LI\\video\\raj\\frame01201.jpg", "LI\\video\\raj\\frame01206.jpg", "LI\\video\\raj\\frame01211.jpg", "LI\\video\\raj\\frame01216.jpg", "LI\\video\\raj\\frame01221.jpg", "LI\\video\\raj\\frame01226.jpg", "LI\\video\\raj\\frame01231.jpg", "LI\\video\\raj\\frame01236.jpg", "LI\\video\\raj\\frame01241.jpg", "LI\\video\\raj\\frame01246.jpg", "LI\\video\\raj\\frame01251.jpg", "LI\\video\\raj\\frame01256.jpg", "LI\\video\\raj\\frame01261.jpg", "LI\\video\\raj\\frame01266.jpg", "LI\\video\\raj\\frame01271.jpg", "LI\\video\\raj\\frame01276.jpg", "LI\\video\\raj\\frame01281.jpg", "LI\\video\\raj\\frame01286.jpg", "LI\\video\\raj\\frame01291.jpg", "LI\\video\\raj\\frame01296.jpg", "LI\\video\\raj\\frame01301.jpg", "LI\\video\\raj\\frame01306.jpg", "LI\\video\\raj\\frame01311.jpg", "LI\\video\\raj\\frame01316.jpg", "LI\\video\\raj\\frame01321.jpg", "LI\\video\\raj\\frame01326.jpg", "LI\\video\\raj\\frame01331.jpg", "LI\\video\\raj\\frame01336.jpg", "LI\\video\\raj\\frame01341.jpg",
						"LI\\video\\raj\\frame01346.jpg", "LI\\video\\raj\\frame01351.jpg", "LI\\video\\raj\\frame01356.jpg", "LI\\video\\raj\\frame01361.jpg", "LI\\video\\raj\\frame01366.jpg", "LI\\video\\raj\\frame01371.jpg", "LI\\video\\raj\\frame01376.jpg", "LI\\video\\raj\\frame01381.jpg", "LI\\video\\raj\\frame01386.jpg", "LI\\video\\raj\\frame01391.jpg", "LI\\video\\raj\\frame01396.jpg", "LI\\video\\raj\\frame01401.jpg", "LI\\video\\raj\\frame01406.jpg", "LI\\video\\raj\\frame01411.jpg", "LI\\video\\raj\\frame01416.jpg", "LI\\video\\raj\\frame01421.jpg", "LI\\video\\raj\\frame01426.jpg", "LI\\video\\raj\\frame01431.jpg", "LI\\video\\raj\\frame01436.jpg", "LI\\video\\raj\\frame01441.jpg", "LI\\video\\raj\\frame01446.jpg", "LI\\video\\raj\\frame01451.jpg", "LI\\video\\raj\\frame01456.jpg", "LI\\video\\raj\\frame01461.jpg", "LI\\video\\raj\\frame01466.jpg", "LI\\video\\raj\\frame01471.jpg", "LI\\video\\raj\\frame01476.jpg", "LI\\video\\raj\\frame01481.jpg", "LI\\video\\raj\\frame01486.jpg", "LI\\video\\raj\\frame01491.jpg", "LI\\video\\raj\\frame01496.jpg", "LI\\video\\raj\\frame01501.jpg", "LI\\video\\raj\\frame01506.jpg", "LI\\video\\raj\\frame01511.jpg", "LI\\video\\raj\\frame01516.jpg", "LI\\video\\raj\\frame01521.jpg", "LI\\video\\raj\\frame01526.jpg", "LI\\video\\raj\\frame01531.jpg", "LI\\video\\raj\\frame01536.jpg", "LI\\video\\raj\\frame01541.jpg", "LI\\video\\raj\\frame01546.jpg", "LI\\video\\raj\\frame01551.jpg", "LI\\video\\raj\\frame01556.jpg", "LI\\video\\raj\\frame01561.jpg", "LI\\video\\raj\\frame01566.jpg", "LI\\video\\raj\\frame01571.jpg", "LI\\video\\raj\\frame01576.jpg", "LI\\video\\raj\\frame01581.jpg", "LI\\video\\raj\\frame01586.jpg", "LI\\video\\raj\\frame01591.jpg", "LI\\video\\raj\\frame01596.jpg", "LI\\video\\raj\\frame01601.jpg", "LI\\video\\raj\\frame01606.jpg", "LI\\video\\raj\\frame01611.jpg",
						"LI\\video\\raj\\frame01616.jpg", "LI\\video\\raj\\frame01621.jpg", "LI\\video\\raj\\frame01626.jpg", "LI\\video\\raj\\frame01631.jpg", "LI\\video\\raj\\frame01636.jpg", "LI\\video\\raj\\frame01641.jpg", "LI\\video\\raj\\frame01646.jpg", "LI\\video\\raj\\frame01651.jpg", "LI\\video\\raj\\frame01656.jpg", "LI\\video\\raj\\frame01661.jpg", "LI\\video\\raj\\frame01666.jpg", "LI\\video\\raj\\frame01671.jpg", "LI\\video\\raj\\frame01676.jpg", "LI\\video\\raj\\frame01681.jpg", "LI\\video\\raj\\frame01686.jpg", "LI\\video\\raj\\frame01691.jpg", "LI\\video\\raj\\frame01696.jpg", "LI\\video\\raj\\frame01701.jpg", "LI\\video\\raj\\frame01706.jpg", "LI\\video\\raj\\frame01711.jpg", "LI\\video\\raj\\frame01716.jpg", "LI\\video\\raj\\frame01721.jpg", "LI\\video\\raj\\frame01726.jpg", "LI\\video\\raj\\frame01731.jpg", "LI\\video\\raj\\frame01736.jpg", "LI\\video\\raj\\frame01741.jpg", "LI\\video\\raj\\frame01746.jpg", "LI\\video\\raj\\frame01751.jpg", "LI\\video\\raj\\frame01756.jpg", "LI\\video\\raj\\frame01761.jpg", "LI\\video\\raj\\frame01766.jpg", "LI\\video\\raj\\frame01771.jpg", "LI\\video\\raj\\frame01776.jpg", "LI\\video\\raj\\frame01781.jpg", "LI\\video\\raj\\frame01786.jpg", "LI\\video\\raj\\frame01791.jpg", "LI\\video\\raj\\frame01796.jpg", "LI\\video\\raj\\frame01801.jpg", "LI\\video\\raj\\frame01806.jpg", "LI\\video\\raj\\frame01811.jpg", "LI\\video\\raj\\frame01816.jpg", "LI\\video\\raj\\frame01821.jpg", "LI\\video\\raj\\frame01826.jpg", "LI\\video\\raj\\frame01831.jpg", "LI\\video\\raj\\frame01836.jpg", "LI\\video\\raj\\frame01841.jpg", "LI\\video\\raj\\frame01846.jpg", "LI\\video\\raj\\frame01851.jpg", "LI\\video\\raj\\frame01856.jpg", "LI\\video\\raj\\frame01861.jpg", "LI\\video\\raj\\frame01866.jpg", "LI\\video\\raj\\frame01871.jpg", "LI\\video\\raj\\frame01876.jpg", "LI\\video\\raj\\frame01881.jpg",
						"LI\\video\\raj\\frame01886.jpg", "LI\\video\\raj\\frame01891.jpg", "LI\\video\\raj\\frame01896.jpg", "LI\\video\\raj\\frame01901.jpg", "LI\\video\\raj\\frame01906.jpg", "LI\\video\\raj\\frame01911.jpg", "LI\\video\\raj\\frame01916.jpg", "LI\\video\\raj\\frame01921.jpg", "LI\\video\\raj\\frame01926.jpg", "LI\\video\\raj\\frame01931.jpg", "LI\\video\\raj\\frame01936.jpg", "LI\\video\\raj\\frame01941.jpg", "LI\\video\\raj\\frame01946.jpg", "LI\\video\\raj\\frame01951.jpg", "LI\\video\\raj\\frame01956.jpg", "LI\\video\\raj\\frame01961.jpg", "LI\\video\\raj\\frame01966.jpg", "LI\\video\\raj\\frame01971.jpg", "LI\\video\\raj\\frame01976.jpg", "LI\\video\\raj\\frame01981.jpg", "LI\\video\\raj\\frame01986.jpg", "LI\\video\\raj\\frame01991.jpg", "LI\\video\\raj\\frame01996.jpg", "LI\\video\\raj\\frame02001.jpg", "LI\\video\\raj\\frame02006.jpg", "LI\\video\\raj\\frame02011.jpg", "LI\\video\\raj\\frame02016.jpg", "LI\\video\\raj\\frame02021.jpg", "LI\\video\\raj\\frame02026.jpg", "LI\\video\\raj\\frame02031.jpg", "LI\\video\\raj\\frame02036.jpg", "LI\\video\\raj\\frame02041.jpg", "LI\\video\\raj\\frame02046.jpg", "LI\\video\\raj\\frame02051.jpg", "LI\\video\\raj\\frame02056.jpg", "LI\\video\\raj\\frame02061.jpg", "LI\\video\\raj\\frame02066.jpg", "LI\\video\\raj\\frame02071.jpg", "LI\\video\\raj\\frame02076.jpg", "LI\\video\\raj\\frame02081.jpg", "LI\\video\\raj\\frame02086.jpg", "LI\\video\\raj\\frame02091.jpg", "LI\\video\\raj\\frame02096.jpg", "LI\\video\\raj\\frame02101.jpg", "LI\\video\\raj\\frame02106.jpg", "LI\\video\\raj\\frame02111.jpg", "LI\\video\\raj\\frame02116.jpg", "LI\\video\\raj\\frame02121.jpg", "LI\\video\\raj\\frame02126.jpg", "LI\\video\\raj\\frame02131.jpg", "LI\\video\\raj\\frame02136.jpg", "LI\\video\\raj\\frame02141.jpg", "LI\\video\\raj\\frame02146.jpg", "LI\\video\\raj\\frame02151.jpg",
						"LI\\video\\raj\\frame02156.jpg", "LI\\video\\raj\\frame02161.jpg", "LI\\video\\raj\\frame02166.jpg", "LI\\video\\raj\\frame02171.jpg", "LI\\video\\raj\\frame02176.jpg", "LI\\video\\raj\\frame02181.jpg", "LI\\video\\raj\\frame02186.jpg", "LI\\video\\raj\\frame02191.jpg", "LI\\video\\raj\\frame02196.jpg", "LI\\video\\raj\\frame02201.jpg", "LI\\video\\raj\\frame02206.jpg", "LI\\video\\raj\\frame02211.jpg", "LI\\video\\raj\\frame02216.jpg", "LI\\video\\raj\\frame02221.jpg", "LI\\video\\raj\\frame02226.jpg", "LI\\video\\raj\\frame02231.jpg", "LI\\video\\raj\\frame02236.jpg", "LI\\video\\raj\\frame02241.jpg", "LI\\video\\raj\\frame02246.jpg", "LI\\video\\raj\\frame02251.jpg", "LI\\video\\raj\\frame02256.jpg", "LI\\video\\raj\\frame02261.jpg", "LI\\video\\raj\\frame02266.jpg", "LI\\video\\raj\\frame02271.jpg", "LI\\video\\raj\\frame02276.jpg", "LI\\video\\raj\\frame02281.jpg", "LI\\video\\raj\\frame02286.jpg", "LI\\video\\raj\\frame02291.jpg", "LI\\video\\raj\\frame02296.jpg", "LI\\video\\raj\\frame02301.jpg", "LI\\video\\raj\\frame02306.jpg", "LI\\video\\raj\\frame02311.jpg", "LI\\video\\raj\\frame02316.jpg", "LI\\video\\raj\\frame02321.jpg", "LI\\video\\raj\\frame02326.jpg", "LI\\video\\raj\\frame02331.jpg", "LI\\video\\raj\\frame02336.jpg", "LI\\video\\raj\\frame02341.jpg", "LI\\video\\raj\\frame02346.jpg", "LI\\video\\raj\\frame02351.jpg", "LI\\video\\raj\\frame02356.jpg", "LI\\video\\raj\\frame02361.jpg", "LI\\video\\raj\\frame02366.jpg", "LI\\video\\raj\\frame02371.jpg", "LI\\video\\raj\\frame02376.jpg", "LI\\video\\raj\\frame02381.jpg", "LI\\video\\raj\\frame02386.jpg", "LI\\video\\raj\\frame02391.jpg", "LI\\video\\raj\\frame02396.jpg", "LI\\video\\raj\\frame02401.jpg", "LI\\video\\raj\\frame02406.jpg", "LI\\video\\raj\\frame02411.jpg", "LI\\video\\raj\\frame02416.jpg", "LI\\video\\raj\\frame02421.jpg",
						"LI\\video\\raj\\frame02426.jpg", "LI\\video\\raj\\frame02431.jpg", "LI\\video\\raj\\frame02436.jpg", "LI\\video\\raj\\frame02441.jpg", "LI\\video\\raj\\frame02446.jpg", "LI\\video\\raj\\frame02451.jpg", "LI\\video\\raj\\frame02456.jpg", "LI\\video\\raj\\frame02461.jpg", "LI\\video\\raj\\frame02466.jpg", "LI\\video\\raj\\frame02471.jpg", "LI\\video\\raj\\frame02476.jpg", "LI\\video\\raj\\frame02481.jpg", "LI\\video\\raj\\frame02486.jpg", "LI\\video\\raj\\frame02491.jpg", "LI\\video\\raj\\frame02496.jpg", "LI\\video\\raj\\frame02501.jpg", "LI\\video\\raj\\frame02506.jpg", "LI\\video\\raj\\frame02511.jpg", "LI\\video\\raj\\frame02516.jpg", "LI\\video\\raj\\frame02521.jpg", "LI\\video\\raj\\frame02526.jpg", "LI\\video\\raj\\frame02531.jpg", "LI\\video\\raj\\frame02536.jpg", "LI\\video\\raj\\frame02541.jpg", "LI\\video\\raj\\frame02546.jpg", "LI\\video\\raj\\frame02551.jpg", "LI\\video\\raj\\frame02556.jpg", "LI\\video\\raj\\frame02561.jpg", "LI\\video\\raj\\frame02566.jpg", "LI\\video\\raj\\frame02571.jpg", "LI\\video\\raj\\frame02576.jpg", "LI\\video\\raj\\frame02581.jpg", "LI\\video\\raj\\frame02586.jpg", "LI\\video\\raj\\frame02591.jpg", "LI\\video\\raj\\frame02596.jpg", "LI\\video\\raj\\frame02601.jpg", "LI\\video\\raj\\frame02606.jpg", "LI\\video\\raj\\frame02611.jpg", "LI\\video\\raj\\frame02616.jpg", "LI\\video\\raj\\frame02621.jpg", "LI\\video\\raj\\frame02626.jpg", "LI\\video\\raj\\frame02631.jpg", "LI\\video\\raj\\frame02636.jpg", "LI\\video\\raj\\frame02641.jpg", "LI\\video\\raj\\frame02646.jpg", "LI\\video\\raj\\frame02651.jpg", "LI\\video\\raj\\frame02656.jpg", "LI\\video\\raj\\frame02661.jpg", "LI\\video\\raj\\frame02666.jpg", "LI\\video\\raj\\frame02671.jpg", "LI\\video\\raj\\frame02676.jpg", "LI\\video\\raj\\frame02681.jpg", "LI\\video\\raj\\frame02686.jpg", "LI\\video\\raj\\frame02691.jpg",
						"LI\\video\\raj\\frame02696.jpg", "LI\\video\\raj\\frame02701.jpg", "LI\\video\\raj\\frame02706.jpg", "LI\\video\\raj\\frame02711.jpg", "LI\\video\\raj\\frame02716.jpg", "LI\\video\\raj\\frame02721.jpg", "LI\\video\\raj\\frame02726.jpg", "LI\\video\\raj\\frame02731.jpg", "LI\\video\\raj\\frame02736.jpg", "LI\\video\\raj\\frame02741.jpg", "LI\\video\\raj\\frame02746.jpg", "LI\\video\\raj\\frame02751.jpg", "LI\\video\\raj\\frame02756.jpg", "LI\\video\\raj\\frame02761.jpg", "LI\\video\\raj\\frame02766.jpg", "LI\\video\\raj\\frame02771.jpg", "LI\\video\\raj\\frame02776.jpg", "LI\\video\\raj\\frame02781.jpg", "LI\\video\\raj\\frame02786.jpg", "LI\\video\\raj\\frame02791.jpg", "LI\\video\\raj\\frame02796.jpg", "LI\\video\\raj\\frame02801.jpg", "LI\\video\\raj\\frame02806.jpg", "LI\\video\\raj\\frame02811.jpg", "LI\\video\\raj\\frame02816.jpg", "LI\\video\\raj\\frame02821.jpg", "LI\\video\\raj\\frame02826.jpg", "LI\\video\\raj\\frame02831.jpg", "LI\\video\\raj\\frame02836.jpg", "LI\\video\\raj\\frame02841.jpg", "LI\\video\\raj\\frame02846.jpg", "LI\\video\\raj\\frame02851.jpg", "LI\\video\\raj\\frame02856.jpg", "LI\\video\\raj\\frame02861.jpg", "LI\\video\\raj\\frame02866.jpg", "LI\\video\\raj\\frame02871.jpg", "LI\\video\\raj\\frame02876.jpg", "LI\\video\\raj\\frame02881.jpg", "LI\\video\\raj\\frame02886.jpg", "LI\\video\\raj\\frame02891.jpg", "LI\\video\\raj\\frame02896.jpg", "LI\\video\\raj\\frame02901.jpg", "LI\\video\\raj\\frame02906.jpg"};

char chvid[612][50] = {"LI\\video\\ch\\frame00001.jpg", "LI\\video\\ch\\frame00006.jpg", "LI\\video\\ch\\frame00011.jpg", "LI\\video\\ch\\frame00016.jpg", "LI\\video\\ch\\frame00021.jpg", "LI\\video\\ch\\frame00026.jpg", "LI\\video\\ch\\frame00031.jpg", "LI\\video\\ch\\frame00036.jpg", "LI\\video\\ch\\frame00041.jpg", "LI\\video\\ch\\frame00046.jpg", "LI\\video\\ch\\frame00051.jpg", "LI\\video\\ch\\frame00056.jpg", "LI\\video\\ch\\frame00061.jpg", "LI\\video\\ch\\frame00066.jpg", "LI\\video\\ch\\frame00071.jpg", "LI\\video\\ch\\frame00076.jpg", "LI\\video\\ch\\frame00081.jpg", "LI\\video\\ch\\frame00086.jpg", "LI\\video\\ch\\frame00091.jpg", "LI\\video\\ch\\frame00096.jpg", "LI\\video\\ch\\frame00101.jpg", "LI\\video\\ch\\frame00106.jpg", "LI\\video\\ch\\frame00111.jpg", "LI\\video\\ch\\frame00116.jpg", "LI\\video\\ch\\frame00121.jpg", "LI\\video\\ch\\frame00126.jpg", "LI\\video\\ch\\frame00131.jpg", "LI\\video\\ch\\frame00136.jpg", "LI\\video\\ch\\frame00141.jpg", "LI\\video\\ch\\frame00146.jpg", "LI\\video\\ch\\frame00151.jpg", "LI\\video\\ch\\frame00156.jpg", "LI\\video\\ch\\frame00161.jpg", "LI\\video\\ch\\frame00166.jpg", "LI\\video\\ch\\frame00171.jpg", "LI\\video\\ch\\frame00176.jpg", "LI\\video\\ch\\frame00181.jpg", "LI\\video\\ch\\frame00186.jpg", "LI\\video\\ch\\frame00191.jpg", "LI\\video\\ch\\frame00196.jpg", "LI\\video\\ch\\frame00201.jpg", "LI\\video\\ch\\frame00206.jpg", "LI\\video\\ch\\frame00211.jpg", "LI\\video\\ch\\frame00216.jpg", "LI\\video\\ch\\frame00221.jpg", "LI\\video\\ch\\frame00226.jpg", "LI\\video\\ch\\frame00231.jpg", "LI\\video\\ch\\frame00236.jpg", "LI\\video\\ch\\frame00241.jpg", "LI\\video\\ch\\frame00246.jpg", "LI\\video\\ch\\frame00251.jpg", "LI\\video\\ch\\frame00256.jpg", "LI\\video\\ch\\frame00261.jpg", "LI\\video\\ch\\frame00266.jpg",
					   "LI\\video\\ch\\frame00271.jpg", "LI\\video\\ch\\frame00276.jpg", "LI\\video\\ch\\frame00281.jpg", "LI\\video\\ch\\frame00286.jpg", "LI\\video\\ch\\frame00291.jpg", "LI\\video\\ch\\frame00296.jpg", "LI\\video\\ch\\frame00301.jpg", "LI\\video\\ch\\frame00306.jpg", "LI\\video\\ch\\frame00311.jpg", "LI\\video\\ch\\frame00316.jpg", "LI\\video\\ch\\frame00321.jpg", "LI\\video\\ch\\frame00326.jpg", "LI\\video\\ch\\frame00331.jpg", "LI\\video\\ch\\frame00336.jpg", "LI\\video\\ch\\frame00341.jpg", "LI\\video\\ch\\frame00346.jpg", "LI\\video\\ch\\frame00351.jpg", "LI\\video\\ch\\frame00356.jpg", "LI\\video\\ch\\frame00361.jpg", "LI\\video\\ch\\frame00366.jpg", "LI\\video\\ch\\frame00371.jpg", "LI\\video\\ch\\frame00376.jpg", "LI\\video\\ch\\frame00381.jpg", "LI\\video\\ch\\frame00386.jpg", "LI\\video\\ch\\frame00391.jpg", "LI\\video\\ch\\frame00396.jpg", "LI\\video\\ch\\frame00401.jpg", "LI\\video\\ch\\frame00406.jpg", "LI\\video\\ch\\frame00411.jpg", "LI\\video\\ch\\frame00416.jpg", "LI\\video\\ch\\frame00421.jpg", "LI\\video\\ch\\frame00426.jpg", "LI\\video\\ch\\frame00431.jpg", "LI\\video\\ch\\frame00436.jpg", "LI\\video\\ch\\frame00441.jpg", "LI\\video\\ch\\frame00446.jpg", "LI\\video\\ch\\frame00451.jpg", "LI\\video\\ch\\frame00456.jpg", "LI\\video\\ch\\frame00461.jpg", "LI\\video\\ch\\frame00466.jpg", "LI\\video\\ch\\frame00471.jpg", "LI\\video\\ch\\frame00476.jpg", "LI\\video\\ch\\frame00481.jpg", "LI\\video\\ch\\frame00486.jpg", "LI\\video\\ch\\frame00491.jpg", "LI\\video\\ch\\frame00496.jpg", "LI\\video\\ch\\frame00501.jpg", "LI\\video\\ch\\frame00506.jpg", "LI\\video\\ch\\frame00511.jpg", "LI\\video\\ch\\frame00516.jpg", "LI\\video\\ch\\frame00521.jpg", "LI\\video\\ch\\frame00526.jpg", "LI\\video\\ch\\frame00531.jpg", "LI\\video\\ch\\frame00536.jpg", "LI\\video\\ch\\frame00541.jpg",
					   "LI\\video\\ch\\frame00546.jpg", "LI\\video\\ch\\frame00551.jpg", "LI\\video\\ch\\frame00556.jpg", "LI\\video\\ch\\frame00561.jpg", "LI\\video\\ch\\frame00566.jpg", "LI\\video\\ch\\frame00571.jpg", "LI\\video\\ch\\frame00576.jpg", "LI\\video\\ch\\frame00581.jpg", "LI\\video\\ch\\frame00586.jpg", "LI\\video\\ch\\frame00591.jpg", "LI\\video\\ch\\frame00596.jpg", "LI\\video\\ch\\frame00601.jpg", "LI\\video\\ch\\frame00606.jpg", "LI\\video\\ch\\frame00611.jpg", "LI\\video\\ch\\frame00616.jpg", "LI\\video\\ch\\frame00621.jpg", "LI\\video\\ch\\frame00626.jpg", "LI\\video\\ch\\frame00631.jpg", "LI\\video\\ch\\frame00636.jpg", "LI\\video\\ch\\frame00641.jpg", "LI\\video\\ch\\frame00646.jpg", "LI\\video\\ch\\frame00651.jpg", "LI\\video\\ch\\frame00656.jpg", "LI\\video\\ch\\frame00661.jpg", "LI\\video\\ch\\frame00666.jpg", "LI\\video\\ch\\frame00671.jpg", "LI\\video\\ch\\frame00676.jpg", "LI\\video\\ch\\frame00681.jpg", "LI\\video\\ch\\frame00686.jpg", "LI\\video\\ch\\frame00691.jpg", "LI\\video\\ch\\frame00696.jpg", "LI\\video\\ch\\frame00701.jpg", "LI\\video\\ch\\frame00706.jpg", "LI\\video\\ch\\frame00711.jpg", "LI\\video\\ch\\frame00716.jpg", "LI\\video\\ch\\frame00721.jpg", "LI\\video\\ch\\frame00726.jpg", "LI\\video\\ch\\frame00731.jpg", "LI\\video\\ch\\frame00736.jpg", "LI\\video\\ch\\frame00741.jpg", "LI\\video\\ch\\frame00746.jpg", "LI\\video\\ch\\frame00751.jpg", "LI\\video\\ch\\frame00756.jpg", "LI\\video\\ch\\frame00761.jpg", "LI\\video\\ch\\frame00766.jpg", "LI\\video\\ch\\frame00771.jpg", "LI\\video\\ch\\frame00776.jpg", "LI\\video\\ch\\frame00781.jpg", "LI\\video\\ch\\frame00786.jpg", "LI\\video\\ch\\frame00791.jpg", "LI\\video\\ch\\frame00796.jpg", "LI\\video\\ch\\frame00801.jpg", "LI\\video\\ch\\frame00806.jpg", "LI\\video\\ch\\frame00811.jpg", "LI\\video\\ch\\frame00816.jpg", "LI\\video\\ch\\frame00821.jpg", "LI\\video\\ch\\frame00826.jpg", "LI\\video\\ch\\frame00831.jpg", "LI\\video\\ch\\frame00836.jpg", "LI\\video\\ch\\frame00841.jpg", "LI\\video\\ch\\frame00846.jpg", "LI\\video\\ch\\frame00851.jpg", "LI\\video\\ch\\frame00856.jpg", "LI\\video\\ch\\frame00861.jpg", "LI\\video\\ch\\frame00866.jpg", "LI\\video\\ch\\frame00871.jpg", "LI\\video\\ch\\frame00876.jpg", "LI\\video\\ch\\frame00881.jpg", "LI\\video\\ch\\frame00886.jpg", "LI\\video\\ch\\frame00891.jpg", "LI\\video\\ch\\frame00896.jpg", "LI\\video\\ch\\frame00901.jpg", "LI\\video\\ch\\frame00906.jpg", "LI\\video\\ch\\frame00911.jpg", "LI\\video\\ch\\frame00916.jpg", "LI\\video\\ch\\frame00921.jpg", "LI\\video\\ch\\frame00926.jpg", "LI\\video\\ch\\frame00931.jpg", "LI\\video\\ch\\frame00936.jpg", "LI\\video\\ch\\frame00941.jpg", "LI\\video\\ch\\frame00946.jpg", "LI\\video\\ch\\frame00951.jpg", "LI\\video\\ch\\frame00956.jpg", "LI\\video\\ch\\frame00961.jpg", "LI\\video\\ch\\frame00966.jpg", "LI\\video\\ch\\frame00971.jpg", "LI\\video\\ch\\frame00976.jpg", "LI\\video\\ch\\frame00981.jpg", "LI\\video\\ch\\frame00986.jpg", "LI\\video\\ch\\frame00991.jpg", "LI\\video\\ch\\frame00996.jpg", "LI\\video\\ch\\frame01001.jpg", "LI\\video\\ch\\frame01006.jpg", "LI\\video\\ch\\frame01011.jpg", "LI\\video\\ch\\frame01016.jpg", "LI\\video\\ch\\frame01021.jpg", "LI\\video\\ch\\frame01026.jpg", "LI\\video\\ch\\frame01031.jpg", "LI\\video\\ch\\frame01036.jpg", "LI\\video\\ch\\frame01041.jpg", "LI\\video\\ch\\frame01046.jpg", "LI\\video\\ch\\frame01051.jpg", "LI\\video\\ch\\frame01056.jpg", "LI\\video\\ch\\frame01061.jpg", "LI\\video\\ch\\frame01066.jpg", "LI\\video\\ch\\frame01071.jpg", "LI\\video\\ch\\frame01076.jpg", "LI\\video\\ch\\frame01081.jpg", "LI\\video\\ch\\frame01086.jpg", "LI\\video\\ch\\frame01091.jpg", "LI\\video\\ch\\frame01096.jpg", "LI\\video\\ch\\frame01101.jpg", "LI\\video\\ch\\frame01106.jpg", "LI\\video\\ch\\frame01111.jpg", "LI\\video\\ch\\frame01116.jpg", "LI\\video\\ch\\frame01121.jpg", "LI\\video\\ch\\frame01126.jpg", "LI\\video\\ch\\frame01131.jpg", "LI\\video\\ch\\frame01136.jpg", "LI\\video\\ch\\frame01141.jpg", "LI\\video\\ch\\frame01146.jpg", "LI\\video\\ch\\frame01151.jpg", "LI\\video\\ch\\frame01156.jpg", "LI\\video\\ch\\frame01161.jpg", "LI\\video\\ch\\frame01166.jpg", "LI\\video\\ch\\frame01171.jpg", "LI\\video\\ch\\frame01176.jpg", "LI\\video\\ch\\frame01181.jpg", "LI\\video\\ch\\frame01186.jpg",
					   "LI\\video\\ch\\frame01191.jpg", "LI\\video\\ch\\frame01196.jpg", "LI\\video\\ch\\frame01201.jpg", "LI\\video\\ch\\frame01206.jpg", "LI\\video\\ch\\frame01211.jpg", "LI\\video\\ch\\frame01216.jpg", "LI\\video\\ch\\frame01221.jpg", "LI\\video\\ch\\frame01226.jpg", "LI\\video\\ch\\frame01231.jpg", "LI\\video\\ch\\frame01236.jpg", "LI\\video\\ch\\frame01241.jpg", "LI\\video\\ch\\frame01246.jpg", "LI\\video\\ch\\frame01251.jpg", "LI\\video\\ch\\frame01256.jpg", "LI\\video\\ch\\frame01261.jpg", "LI\\video\\ch\\frame01266.jpg", "LI\\video\\ch\\frame01271.jpg", "LI\\video\\ch\\frame01276.jpg", "LI\\video\\ch\\frame01281.jpg", "LI\\video\\ch\\frame01286.jpg", "LI\\video\\ch\\frame01291.jpg", "LI\\video\\ch\\frame01296.jpg", "LI\\video\\ch\\frame01301.jpg", "LI\\video\\ch\\frame01306.jpg", "LI\\video\\ch\\frame01311.jpg", "LI\\video\\ch\\frame01316.jpg", "LI\\video\\ch\\frame01321.jpg", "LI\\video\\ch\\frame01326.jpg", "LI\\video\\ch\\frame01331.jpg", "LI\\video\\ch\\frame01336.jpg", "LI\\video\\ch\\frame01341.jpg", "LI\\video\\ch\\frame01346.jpg", "LI\\video\\ch\\frame01351.jpg", "LI\\video\\ch\\frame01356.jpg", "LI\\video\\ch\\frame01361.jpg", "LI\\video\\ch\\frame01366.jpg", "LI\\video\\ch\\frame01371.jpg", "LI\\video\\ch\\frame01376.jpg", "LI\\video\\ch\\frame01381.jpg", "LI\\video\\ch\\frame01386.jpg", "LI\\video\\ch\\frame01391.jpg", "LI\\video\\ch\\frame01396.jpg", "LI\\video\\ch\\frame01401.jpg", "LI\\video\\ch\\frame01406.jpg", "LI\\video\\ch\\frame01411.jpg", "LI\\video\\ch\\frame01416.jpg", "LI\\video\\ch\\frame01421.jpg", "LI\\video\\ch\\frame01426.jpg", "LI\\video\\ch\\frame01431.jpg", "LI\\video\\ch\\frame01436.jpg", "LI\\video\\ch\\frame01441.jpg", "LI\\video\\ch\\frame01446.jpg", "LI\\video\\ch\\frame01451.jpg", "LI\\video\\ch\\frame01456.jpg", "LI\\video\\ch\\frame01461.jpg", "LI\\video\\ch\\frame01466.jpg", "LI\\video\\ch\\frame01471.jpg", "LI\\video\\ch\\frame01476.jpg", "LI\\video\\ch\\frame01481.jpg", "LI\\video\\ch\\frame01486.jpg", "LI\\video\\ch\\frame01491.jpg", "LI\\video\\ch\\frame01496.jpg", "LI\\video\\ch\\frame01501.jpg", "LI\\video\\ch\\frame01506.jpg", "LI\\video\\ch\\frame01511.jpg", "LI\\video\\ch\\frame01516.jpg", "LI\\video\\ch\\frame01521.jpg", "LI\\video\\ch\\frame01526.jpg", "LI\\video\\ch\\frame01531.jpg", "LI\\video\\ch\\frame01536.jpg", "LI\\video\\ch\\frame01541.jpg", "LI\\video\\ch\\frame01546.jpg", "LI\\video\\ch\\frame01551.jpg", "LI\\video\\ch\\frame01556.jpg", "LI\\video\\ch\\frame01561.jpg", "LI\\video\\ch\\frame01566.jpg", "LI\\video\\ch\\frame01571.jpg", "LI\\video\\ch\\frame01576.jpg", "LI\\video\\ch\\frame01581.jpg", "LI\\video\\ch\\frame01586.jpg", "LI\\video\\ch\\frame01591.jpg", "LI\\video\\ch\\frame01596.jpg", "LI\\video\\ch\\frame01601.jpg", "LI\\video\\ch\\frame01606.jpg", "LI\\video\\ch\\frame01611.jpg", "LI\\video\\ch\\frame01616.jpg", "LI\\video\\ch\\frame01621.jpg", "LI\\video\\ch\\frame01626.jpg", "LI\\video\\ch\\frame01631.jpg", "LI\\video\\ch\\frame01636.jpg", "LI\\video\\ch\\frame01641.jpg", "LI\\video\\ch\\frame01646.jpg", "LI\\video\\ch\\frame01651.jpg", "LI\\video\\ch\\frame01656.jpg", "LI\\video\\ch\\frame01661.jpg", "LI\\video\\ch\\frame01666.jpg", "LI\\video\\ch\\frame01671.jpg", "LI\\video\\ch\\frame01676.jpg", "LI\\video\\ch\\frame01681.jpg", "LI\\video\\ch\\frame01686.jpg", "LI\\video\\ch\\frame01691.jpg", "LI\\video\\ch\\frame01696.jpg", "LI\\video\\ch\\frame01701.jpg", "LI\\video\\ch\\frame01706.jpg", "LI\\video\\ch\\frame01711.jpg", "LI\\video\\ch\\frame01716.jpg", "LI\\video\\ch\\frame01721.jpg", "LI\\video\\ch\\frame01726.jpg", "LI\\video\\ch\\frame01731.jpg", "LI\\video\\ch\\frame01736.jpg", "LI\\video\\ch\\frame01741.jpg", "LI\\video\\ch\\frame01746.jpg", "LI\\video\\ch\\frame01751.jpg", "LI\\video\\ch\\frame01756.jpg", "LI\\video\\ch\\frame01761.jpg", "LI\\video\\ch\\frame01766.jpg", "LI\\video\\ch\\frame01771.jpg", "LI\\video\\ch\\frame01776.jpg", "LI\\video\\ch\\frame01781.jpg", "LI\\video\\ch\\frame01786.jpg", "LI\\video\\ch\\frame01791.jpg", "LI\\video\\ch\\frame01796.jpg", "LI\\video\\ch\\frame01801.jpg", "LI\\video\\ch\\frame01806.jpg", "LI\\video\\ch\\frame01811.jpg", "LI\\video\\ch\\frame01816.jpg", "LI\\video\\ch\\frame01821.jpg", "LI\\video\\ch\\frame01826.jpg", "LI\\video\\ch\\frame01831.jpg",
					   "LI\\video\\ch\\frame01836.jpg", "LI\\video\\ch\\frame01841.jpg", "LI\\video\\ch\\frame01846.jpg", "LI\\video\\ch\\frame01851.jpg", "LI\\video\\ch\\frame01856.jpg", "LI\\video\\ch\\frame01861.jpg", "LI\\video\\ch\\frame01866.jpg", "LI\\video\\ch\\frame01871.jpg", "LI\\video\\ch\\frame01876.jpg", "LI\\video\\ch\\frame01881.jpg", "LI\\video\\ch\\frame01886.jpg", "LI\\video\\ch\\frame01891.jpg", "LI\\video\\ch\\frame01896.jpg", "LI\\video\\ch\\frame01901.jpg", "LI\\video\\ch\\frame01906.jpg", "LI\\video\\ch\\frame01911.jpg", "LI\\video\\ch\\frame01916.jpg", "LI\\video\\ch\\frame01921.jpg", "LI\\video\\ch\\frame01926.jpg", "LI\\video\\ch\\frame01931.jpg", "LI\\video\\ch\\frame01936.jpg", "LI\\video\\ch\\frame01941.jpg", "LI\\video\\ch\\frame01946.jpg", "LI\\video\\ch\\frame01951.jpg", "LI\\video\\ch\\frame01956.jpg", "LI\\video\\ch\\frame01961.jpg", "LI\\video\\ch\\frame01966.jpg", "LI\\video\\ch\\frame01971.jpg", "LI\\video\\ch\\frame01976.jpg", "LI\\video\\ch\\frame01981.jpg", "LI\\video\\ch\\frame01986.jpg", "LI\\video\\ch\\frame01991.jpg", "LI\\video\\ch\\frame01996.jpg", "LI\\video\\ch\\frame02001.jpg", "LI\\video\\ch\\frame02006.jpg", "LI\\video\\ch\\frame02011.jpg", "LI\\video\\ch\\frame02016.jpg", "LI\\video\\ch\\frame02021.jpg", "LI\\video\\ch\\frame02026.jpg", "LI\\video\\ch\\frame02031.jpg", "LI\\video\\ch\\frame02036.jpg", "LI\\video\\ch\\frame02041.jpg", "LI\\video\\ch\\frame02046.jpg", "LI\\video\\ch\\frame02051.jpg", "LI\\video\\ch\\frame02056.jpg", "LI\\video\\ch\\frame02061.jpg", "LI\\video\\ch\\frame02066.jpg", "LI\\video\\ch\\frame02071.jpg", "LI\\video\\ch\\frame02076.jpg", "LI\\video\\ch\\frame02081.jpg", "LI\\video\\ch\\frame02086.jpg", "LI\\video\\ch\\frame02091.jpg", "LI\\video\\ch\\frame02096.jpg", "LI\\video\\ch\\frame02101.jpg", "LI\\video\\ch\\frame02106.jpg", "LI\\video\\ch\\frame02111.jpg", "LI\\video\\ch\\frame02116.jpg", "LI\\video\\ch\\frame02121.jpg", "LI\\video\\ch\\frame02126.jpg", "LI\\video\\ch\\frame02131.jpg", "LI\\video\\ch\\frame02136.jpg", "LI\\video\\ch\\frame02141.jpg", "LI\\video\\ch\\frame02146.jpg", "LI\\video\\ch\\frame02151.jpg", "LI\\video\\ch\\frame02156.jpg", "LI\\video\\ch\\frame02161.jpg", "LI\\video\\ch\\frame02166.jpg", "LI\\video\\ch\\frame02171.jpg", "LI\\video\\ch\\frame02176.jpg", "LI\\video\\ch\\frame02181.jpg", "LI\\video\\ch\\frame02186.jpg", "LI\\video\\ch\\frame02191.jpg", "LI\\video\\ch\\frame02196.jpg", "LI\\video\\ch\\frame02201.jpg", "LI\\video\\ch\\frame02206.jpg", "LI\\video\\ch\\frame02211.jpg", "LI\\video\\ch\\frame02216.jpg", "LI\\video\\ch\\frame02221.jpg", "LI\\video\\ch\\frame02226.jpg", "LI\\video\\ch\\frame02231.jpg", "LI\\video\\ch\\frame02236.jpg", "LI\\video\\ch\\frame02241.jpg", "LI\\video\\ch\\frame02246.jpg", "LI\\video\\ch\\frame02251.jpg", "LI\\video\\ch\\frame02256.jpg", "LI\\video\\ch\\frame02261.jpg", "LI\\video\\ch\\frame02266.jpg", "LI\\video\\ch\\frame02271.jpg", "LI\\video\\ch\\frame02276.jpg", "LI\\video\\ch\\frame02281.jpg", "LI\\video\\ch\\frame02286.jpg", "LI\\video\\ch\\frame02291.jpg", "LI\\video\\ch\\frame02296.jpg", "LI\\video\\ch\\frame02301.jpg", "LI\\video\\ch\\frame02306.jpg", "LI\\video\\ch\\frame02311.jpg", "LI\\video\\ch\\frame02316.jpg", "LI\\video\\ch\\frame02321.jpg", "LI\\video\\ch\\frame02326.jpg", "LI\\video\\ch\\frame02331.jpg", "LI\\video\\ch\\frame02336.jpg", "LI\\video\\ch\\frame02341.jpg", "LI\\video\\ch\\frame02346.jpg", "LI\\video\\ch\\frame02351.jpg", "LI\\video\\ch\\frame02356.jpg", "LI\\video\\ch\\frame02361.jpg", "LI\\video\\ch\\frame02366.jpg", "LI\\video\\ch\\frame02371.jpg", "LI\\video\\ch\\frame02376.jpg", "LI\\video\\ch\\frame02381.jpg", "LI\\video\\ch\\frame02386.jpg", "LI\\video\\ch\\frame02391.jpg", "LI\\video\\ch\\frame02396.jpg", "LI\\video\\ch\\frame02401.jpg", "LI\\video\\ch\\frame02406.jpg", "LI\\video\\ch\\frame02411.jpg", "LI\\video\\ch\\frame02416.jpg", "LI\\video\\ch\\frame02421.jpg", "LI\\video\\ch\\frame02426.jpg", "LI\\video\\ch\\frame02431.jpg", "LI\\video\\ch\\frame02436.jpg", "LI\\video\\ch\\frame02441.jpg", "LI\\video\\ch\\frame02446.jpg", "LI\\video\\ch\\frame02451.jpg", "LI\\video\\ch\\frame02456.jpg", "LI\\video\\ch\\frame02461.jpg", "LI\\video\\ch\\frame02466.jpg", "LI\\video\\ch\\frame02471.jpg", "LI\\video\\ch\\frame02476.jpg",
					   "LI\\video\\ch\\frame02481.jpg", "LI\\video\\ch\\frame02486.jpg", "LI\\video\\ch\\frame02491.jpg", "LI\\video\\ch\\frame02496.jpg", "LI\\video\\ch\\frame02501.jpg", "LI\\video\\ch\\frame02506.jpg", "LI\\video\\ch\\frame02511.jpg", "LI\\video\\ch\\frame02516.jpg", "LI\\video\\ch\\frame02521.jpg", "LI\\video\\ch\\frame02526.jpg", "LI\\video\\ch\\frame02531.jpg", "LI\\video\\ch\\frame02536.jpg", "LI\\video\\ch\\frame02541.jpg", "LI\\video\\ch\\frame02546.jpg", "LI\\video\\ch\\frame02551.jpg", "LI\\video\\ch\\frame02556.jpg", "LI\\video\\ch\\frame02561.jpg", "LI\\video\\ch\\frame02566.jpg", "LI\\video\\ch\\frame02571.jpg", "LI\\video\\ch\\frame02576.jpg", "LI\\video\\ch\\frame02581.jpg", "LI\\video\\ch\\frame02586.jpg", "LI\\video\\ch\\frame02591.jpg", "LI\\video\\ch\\frame02596.jpg", "LI\\video\\ch\\frame02601.jpg", "LI\\video\\ch\\frame02606.jpg", "LI\\video\\ch\\frame02611.jpg", "LI\\video\\ch\\frame02616.jpg", "LI\\video\\ch\\frame02621.jpg", "LI\\video\\ch\\frame02626.jpg", "LI\\video\\ch\\frame02631.jpg", "LI\\video\\ch\\frame02636.jpg", "LI\\video\\ch\\frame02641.jpg", "LI\\video\\ch\\frame02646.jpg", "LI\\video\\ch\\frame02651.jpg", "LI\\video\\ch\\frame02656.jpg", "LI\\video\\ch\\frame02661.jpg", "LI\\video\\ch\\frame02666.jpg", "LI\\video\\ch\\frame02671.jpg", "LI\\video\\ch\\frame02676.jpg", "LI\\video\\ch\\frame02681.jpg", "LI\\video\\ch\\frame02686.jpg", "LI\\video\\ch\\frame02691.jpg", "LI\\video\\ch\\frame02696.jpg", "LI\\video\\ch\\frame02701.jpg", "LI\\video\\ch\\frame02706.jpg", "LI\\video\\ch\\frame02711.jpg", "LI\\video\\ch\\frame02716.jpg", "LI\\video\\ch\\frame02721.jpg", "LI\\video\\ch\\frame02726.jpg", "LI\\video\\ch\\frame02731.jpg", "LI\\video\\ch\\frame02736.jpg", "LI\\video\\ch\\frame02741.jpg", "LI\\video\\ch\\frame02746.jpg", "LI\\video\\ch\\frame02751.jpg", "LI\\video\\ch\\frame02756.jpg", "LI\\video\\ch\\frame02761.jpg", "LI\\video\\ch\\frame02766.jpg", "LI\\video\\ch\\frame02771.jpg", "LI\\video\\ch\\frame02776.jpg", "LI\\video\\ch\\frame02781.jpg", "LI\\video\\ch\\frame02786.jpg", "LI\\video\\ch\\frame02791.jpg", "LI\\video\\ch\\frame02796.jpg", "LI\\video\\ch\\frame02801.jpg", "LI\\video\\ch\\frame02806.jpg", "LI\\video\\ch\\frame02811.jpg", "LI\\video\\ch\\frame02816.jpg", "LI\\video\\ch\\frame02821.jpg", "LI\\video\\ch\\frame02826.jpg", "LI\\video\\ch\\frame02831.jpg", "LI\\video\\ch\\frame02836.jpg", "LI\\video\\ch\\frame02841.jpg", "LI\\video\\ch\\frame02846.jpg", "LI\\video\\ch\\frame02851.jpg", "LI\\video\\ch\\frame02856.jpg", "LI\\video\\ch\\frame02861.jpg", "LI\\video\\ch\\frame02866.jpg", "LI\\video\\ch\\frame02871.jpg", "LI\\video\\ch\\frame02876.jpg", "LI\\video\\ch\\frame02881.jpg", "LI\\video\\ch\\frame02886.jpg", "LI\\video\\ch\\frame02891.jpg", "LI\\video\\ch\\frame02896.jpg", "LI\\video\\ch\\frame02901.jpg", "LI\\video\\ch\\frame02906.jpg", "LI\\video\\ch\\frame02911.jpg", "LI\\video\\ch\\frame02916.jpg", "LI\\video\\ch\\frame02921.jpg", "LI\\video\\ch\\frame02926.jpg", "LI\\video\\ch\\frame02931.jpg", "LI\\video\\ch\\frame02936.jpg", "LI\\video\\ch\\frame02941.jpg", "LI\\video\\ch\\frame02946.jpg", "LI\\video\\ch\\frame02951.jpg", "LI\\video\\ch\\frame02956.jpg", "LI\\video\\ch\\frame02961.jpg", "LI\\video\\ch\\frame02966.jpg", "LI\\video\\ch\\frame02971.jpg", "LI\\video\\ch\\frame02976.jpg", "LI\\video\\ch\\frame02981.jpg", "LI\\video\\ch\\frame02986.jpg", "LI\\video\\ch\\frame02991.jpg", "LI\\video\\ch\\frame02996.jpg", "LI\\video\\ch\\frame03001.jpg", "LI\\video\\ch\\frame03006.jpg", "LI\\video\\ch\\frame03011.jpg", "LI\\video\\ch\\frame03016.jpg", "LI\\video\\ch\\frame03021.jpg", "LI\\video\\ch\\frame03026.jpg", "LI\\video\\ch\\frame03031.jpg", "LI\\video\\ch\\frame03036.jpg", "LI\\video\\ch\\frame03041.jpg", "LI\\video\\ch\\frame03046.jpg", "LI\\video\\ch\\frame03051.jpg", "LI\\video\\ch\\frame03056.jpg"};

char trdh1[39][50] = {"LI\\video\\tr\\dh1\\frame00001.jpg", "LI\\video\\tr\\dh1\\frame00002.jpg", "LI\\video\\tr\\dh1\\frame00003.jpg", "LI\\video\\tr\\dh1\\frame00004.jpg", "LI\\video\\tr\\dh1\\frame00005.jpg", "LI\\video\\tr\\dh1\\frame00006.jpg", "LI\\video\\tr\\dh1\\frame00007.jpg", "LI\\video\\tr\\dh1\\frame00008.jpg", "LI\\video\\tr\\dh1\\frame00009.jpg", "LI\\video\\tr\\dh1\\frame00010.jpg", "LI\\video\\tr\\dh1\\frame00011.jpg", "LI\\video\\tr\\dh1\\frame00012.jpg", "LI\\video\\tr\\dh1\\frame00013.jpg", "LI\\video\\tr\\dh1\\frame00014.jpg", "LI\\video\\tr\\dh1\\frame00015.jpg", "LI\\video\\tr\\dh1\\frame00016.jpg", "LI\\video\\tr\\dh1\\frame00017.jpg", "LI\\video\\tr\\dh1\\frame00018.jpg", "LI\\video\\tr\\dh1\\frame00019.jpg", "LI\\video\\tr\\dh1\\frame00020.jpg", "LI\\video\\tr\\dh1\\frame00021.jpg", "LI\\video\\tr\\dh1\\frame00022.jpg", "LI\\video\\tr\\dh1\\frame00023.jpg", "LI\\video\\tr\\dh1\\frame00024.jpg", "LI\\video\\tr\\dh1\\frame00025.jpg", "LI\\video\\tr\\dh1\\frame00026.jpg", "LI\\video\\tr\\dh1\\frame00027.jpg", "LI\\video\\tr\\dh1\\frame00028.jpg", "LI\\video\\tr\\dh1\\frame00029.jpg", "LI\\video\\tr\\dh1\\frame00030.jpg", "LI\\video\\tr\\dh1\\frame00031.jpg", "LI\\video\\tr\\dh1\\frame00032.jpg", "LI\\video\\tr\\dh1\\frame00033.jpg", "LI\\video\\tr\\dh1\\frame00034.jpg", "LI\\video\\tr\\dh1\\frame00035.jpg", "LI\\video\\tr\\dh1\\frame00036.jpg", "LI\\video\\tr\\dh1\\frame00037.jpg", "LI\\video\\tr\\dh1\\frame00038.jpg", "LI\\video\\tr\\dh1\\frame00039.jpg"};
char trdh2[39][50] = {"LI\\video\\tr\\dh2\\frame00001.jpg", "LI\\video\\tr\\dh2\\frame00002.jpg", "LI\\video\\tr\\dh2\\frame00003.jpg", "LI\\video\\tr\\dh2\\frame00004.jpg", "LI\\video\\tr\\dh2\\frame00005.jpg", "LI\\video\\tr\\dh2\\frame00006.jpg", "LI\\video\\tr\\dh2\\frame00007.jpg", "LI\\video\\tr\\dh2\\frame00008.jpg", "LI\\video\\tr\\dh2\\frame00009.jpg", "LI\\video\\tr\\dh2\\frame00010.jpg", "LI\\video\\tr\\dh2\\frame00011.jpg", "LI\\video\\tr\\dh2\\frame00012.jpg", "LI\\video\\tr\\dh2\\frame00013.jpg", "LI\\video\\tr\\dh2\\frame00014.jpg", "LI\\video\\tr\\dh2\\frame00015.jpg", "LI\\video\\tr\\dh2\\frame00016.jpg", "LI\\video\\tr\\dh2\\frame00017.jpg", "LI\\video\\tr\\dh2\\frame00018.jpg", "LI\\video\\tr\\dh2\\frame00019.jpg", "LI\\video\\tr\\dh2\\frame00020.jpg", "LI\\video\\tr\\dh2\\frame00021.jpg", "LI\\video\\tr\\dh2\\frame00022.jpg", "LI\\video\\tr\\dh2\\frame00023.jpg", "LI\\video\\tr\\dh2\\frame00024.jpg", "LI\\video\\tr\\dh2\\frame00025.jpg", "LI\\video\\tr\\dh2\\frame00026.jpg", "LI\\video\\tr\\dh2\\frame00027.jpg", "LI\\video\\tr\\dh2\\frame00028.jpg", "LI\\video\\tr\\dh2\\frame00029.jpg", "LI\\video\\tr\\dh2\\frame00030.jpg", "LI\\video\\tr\\dh2\\frame00031.jpg", "LI\\video\\tr\\dh2\\frame00032.jpg", "LI\\video\\tr\\dh2\\frame00033.jpg", "LI\\video\\tr\\dh2\\frame00034.jpg", "LI\\video\\tr\\dh2\\frame00035.jpg", "LI\\video\\tr\\dh2\\frame00036.jpg", "LI\\video\\tr\\dh2\\frame00037.jpg", "LI\\video\\tr\\dh2\\frame00038.jpg", "LI\\video\\tr\\dh2\\frame00039.jpg"};
char trdh3[38][50] = {"LI\\video\\tr\\dh3\\frame00001.jpg", "LI\\video\\tr\\dh3\\frame00002.jpg", "LI\\video\\tr\\dh3\\frame00003.jpg", "LI\\video\\tr\\dh3\\frame00004.jpg", "LI\\video\\tr\\dh3\\frame00005.jpg", "LI\\video\\tr\\dh3\\frame00006.jpg", "LI\\video\\tr\\dh3\\frame00007.jpg", "LI\\video\\tr\\dh3\\frame00008.jpg", "LI\\video\\tr\\dh3\\frame00009.jpg", "LI\\video\\tr\\dh3\\frame00010.jpg", "LI\\video\\tr\\dh3\\frame00011.jpg", "LI\\video\\tr\\dh3\\frame00012.jpg", "LI\\video\\tr\\dh3\\frame00013.jpg", "LI\\video\\tr\\dh3\\frame00014.jpg", "LI\\video\\tr\\dh3\\frame00015.jpg", "LI\\video\\tr\\dh3\\frame00016.jpg", "LI\\video\\tr\\dh3\\frame00017.jpg", "LI\\video\\tr\\dh3\\frame00018.jpg", "LI\\video\\tr\\dh3\\frame00019.jpg", "LI\\video\\tr\\dh3\\frame00020.jpg", "LI\\video\\tr\\dh3\\frame00021.jpg", "LI\\video\\tr\\dh3\\frame00022.jpg", "LI\\video\\tr\\dh3\\frame00023.jpg", "LI\\video\\tr\\dh3\\frame00024.jpg", "LI\\video\\tr\\dh3\\frame00025.jpg", "LI\\video\\tr\\dh3\\frame00026.jpg", "LI\\video\\tr\\dh3\\frame00027.jpg", "LI\\video\\tr\\dh3\\frame00028.jpg", "LI\\video\\tr\\dh3\\frame00029.jpg", "LI\\video\\tr\\dh3\\frame00030.jpg", "LI\\video\\tr\\dh3\\frame00031.jpg", "LI\\video\\tr\\dh3\\frame00032.jpg", "LI\\video\\tr\\dh3\\frame00033.jpg", "LI\\video\\tr\\dh3\\frame00034.jpg", "LI\\video\\tr\\dh3\\frame00035.jpg", "LI\\video\\tr\\dh3\\frame00036.jpg", "LI\\video\\tr\\dh3\\frame00037.jpg", "LI\\video\\tr\\dh3\\frame00038.jpg"};
char trraj1[48][50] = {"LI\\video\\tr\\raj1\\frame00001.jpg", "LI\\video\\tr\\raj1\\frame00002.jpg", "LI\\video\\tr\\raj1\\frame00003.jpg", "LI\\video\\tr\\raj1\\frame00004.jpg", "LI\\video\\tr\\raj1\\frame00005.jpg", "LI\\video\\tr\\raj1\\frame00006.jpg", "LI\\video\\tr\\raj1\\frame00007.jpg", "LI\\video\\tr\\raj1\\frame00008.jpg", "LI\\video\\tr\\raj1\\frame00009.jpg", "LI\\video\\tr\\raj1\\frame00010.jpg", "LI\\video\\tr\\raj1\\frame00011.jpg", "LI\\video\\tr\\raj1\\frame00012.jpg", "LI\\video\\tr\\raj1\\frame00013.jpg", "LI\\video\\tr\\raj1\\frame00014.jpg", "LI\\video\\tr\\raj1\\frame00015.jpg", "LI\\video\\tr\\raj1\\frame00016.jpg", "LI\\video\\tr\\raj1\\frame00017.jpg", "LI\\video\\tr\\raj1\\frame00018.jpg", "LI\\video\\tr\\raj1\\frame00019.jpg", "LI\\video\\tr\\raj1\\frame00020.jpg", "LI\\video\\tr\\raj1\\frame00021.jpg", "LI\\video\\tr\\raj1\\frame00022.jpg", "LI\\video\\tr\\raj1\\frame00023.jpg", "LI\\video\\tr\\raj1\\frame00024.jpg", "LI\\video\\tr\\raj1\\frame00025.jpg", "LI\\video\\tr\\raj1\\frame00026.jpg", "LI\\video\\tr\\raj1\\frame00027.jpg", "LI\\video\\tr\\raj1\\frame00028.jpg", "LI\\video\\tr\\raj1\\frame00029.jpg", "LI\\video\\tr\\raj1\\frame00030.jpg", "LI\\video\\tr\\raj1\\frame00031.jpg", "LI\\video\\tr\\raj1\\frame00032.jpg", "LI\\video\\tr\\raj1\\frame00033.jpg", "LI\\video\\tr\\raj1\\frame00034.jpg", "LI\\video\\tr\\raj1\\frame00035.jpg", "LI\\video\\tr\\raj1\\frame00036.jpg", "LI\\video\\tr\\raj1\\frame00037.jpg", "LI\\video\\tr\\raj1\\frame00038.jpg", "LI\\video\\tr\\raj1\\frame00039.jpg", "LI\\video\\tr\\raj1\\frame00040.jpg", "LI\\video\\tr\\raj1\\frame00041.jpg", "LI\\video\\tr\\raj1\\frame00042.jpg", "LI\\video\\tr\\raj1\\frame00043.jpg", "LI\\video\\tr\\raj1\\frame00044.jpg", "LI\\video\\tr\\raj1\\frame00045.jpg", "LI\\video\\tr\\raj1\\frame00046.jpg", "LI\\video\\tr\\raj1\\frame00047.jpg", "LI\\video\\tr\\raj1\\frame00048.jpg"};
char trraj2[48][50] = {"LI\\video\\tr\\raj2\\frame00001.jpg", "LI\\video\\tr\\raj2\\frame00002.jpg", "LI\\video\\tr\\raj2\\frame00003.jpg", "LI\\video\\tr\\raj2\\frame00004.jpg", "LI\\video\\tr\\raj2\\frame00005.jpg", "LI\\video\\tr\\raj2\\frame00006.jpg", "LI\\video\\tr\\raj2\\frame00007.jpg", "LI\\video\\tr\\raj2\\frame00008.jpg", "LI\\video\\tr\\raj2\\frame00009.jpg", "LI\\video\\tr\\raj2\\frame00010.jpg", "LI\\video\\tr\\raj2\\frame00011.jpg", "LI\\video\\tr\\raj2\\frame00012.jpg", "LI\\video\\tr\\raj2\\frame00013.jpg", "LI\\video\\tr\\raj2\\frame00014.jpg", "LI\\video\\tr\\raj2\\frame00015.jpg", "LI\\video\\tr\\raj2\\frame00016.jpg", "LI\\video\\tr\\raj2\\frame00017.jpg", "LI\\video\\tr\\raj2\\frame00018.jpg", "LI\\video\\tr\\raj2\\frame00019.jpg", "LI\\video\\tr\\raj2\\frame00020.jpg", "LI\\video\\tr\\raj2\\frame00021.jpg", "LI\\video\\tr\\raj2\\frame00022.jpg", "LI\\video\\tr\\raj2\\frame00023.jpg", "LI\\video\\tr\\raj2\\frame00024.jpg", "LI\\video\\tr\\raj2\\frame00025.jpg", "LI\\video\\tr\\raj2\\frame00026.jpg", "LI\\video\\tr\\raj2\\frame00027.jpg", "LI\\video\\tr\\raj2\\frame00028.jpg", "LI\\video\\tr\\raj2\\frame00029.jpg", "LI\\video\\tr\\raj2\\frame00030.jpg", "LI\\video\\tr\\raj2\\frame00031.jpg", "LI\\video\\tr\\raj2\\frame00032.jpg", "LI\\video\\tr\\raj2\\frame00033.jpg", "LI\\video\\tr\\raj2\\frame00034.jpg", "LI\\video\\tr\\raj2\\frame00035.jpg", "LI\\video\\tr\\raj2\\frame00036.jpg", "LI\\video\\tr\\raj2\\frame00037.jpg", "LI\\video\\tr\\raj2\\frame00038.jpg", "LI\\video\\tr\\raj2\\frame00039.jpg", "LI\\video\\tr\\raj2\\frame00040.jpg", "LI\\video\\tr\\raj2\\frame00041.jpg", "LI\\video\\tr\\raj2\\frame00042.jpg", "LI\\video\\tr\\raj2\\frame00043.jpg", "LI\\video\\tr\\raj2\\frame00044.jpg", "LI\\video\\tr\\raj2\\frame00045.jpg", "LI\\video\\tr\\raj2\\frame00046.jpg", "LI\\video\\tr\\raj2\\frame00047.jpg", "LI\\video\\tr\\raj2\\frame00048.jpg"};
char trraj3[48][50] = {"LI\\video\\tr\\raj3\\frame00001.jpg", "LI\\video\\tr\\raj3\\frame00002.jpg", "LI\\video\\tr\\raj3\\frame00003.jpg", "LI\\video\\tr\\raj3\\frame00004.jpg", "LI\\video\\tr\\raj3\\frame00005.jpg", "LI\\video\\tr\\raj3\\frame00006.jpg", "LI\\video\\tr\\raj3\\frame00007.jpg", "LI\\video\\tr\\raj3\\frame00008.jpg", "LI\\video\\tr\\raj3\\frame00009.jpg", "LI\\video\\tr\\raj3\\frame00010.jpg", "LI\\video\\tr\\raj3\\frame00011.jpg", "LI\\video\\tr\\raj3\\frame00012.jpg", "LI\\video\\tr\\raj3\\frame00013.jpg", "LI\\video\\tr\\raj3\\frame00014.jpg", "LI\\video\\tr\\raj3\\frame00015.jpg", "LI\\video\\tr\\raj3\\frame00016.jpg", "LI\\video\\tr\\raj3\\frame00017.jpg", "LI\\video\\tr\\raj3\\frame00018.jpg", "LI\\video\\tr\\raj3\\frame00019.jpg", "LI\\video\\tr\\raj3\\frame00020.jpg", "LI\\video\\tr\\raj3\\frame00021.jpg", "LI\\video\\tr\\raj3\\frame00022.jpg", "LI\\video\\tr\\raj3\\frame00023.jpg", "LI\\video\\tr\\raj3\\frame00024.jpg", "LI\\video\\tr\\raj3\\frame00025.jpg", "LI\\video\\tr\\raj3\\frame00026.jpg", "LI\\video\\tr\\raj3\\frame00027.jpg", "LI\\video\\tr\\raj3\\frame00028.jpg", "LI\\video\\tr\\raj3\\frame00029.jpg", "LI\\video\\tr\\raj3\\frame00030.jpg", "LI\\video\\tr\\raj3\\frame00031.jpg", "LI\\video\\tr\\raj3\\frame00032.jpg", "LI\\video\\tr\\raj3\\frame00033.jpg", "LI\\video\\tr\\raj3\\frame00034.jpg", "LI\\video\\tr\\raj3\\frame00035.jpg", "LI\\video\\tr\\raj3\\frame00036.jpg", "LI\\video\\tr\\raj3\\frame00037.jpg", "LI\\video\\tr\\raj3\\frame00038.jpg", "LI\\video\\tr\\raj3\\frame00039.jpg", "LI\\video\\tr\\raj3\\frame00040.jpg", "LI\\video\\tr\\raj3\\frame00041.jpg", "LI\\video\\tr\\raj3\\frame00042.jpg", "LI\\video\\tr\\raj3\\frame00043.jpg", "LI\\video\\tr\\raj3\\frame00044.jpg", "LI\\video\\tr\\raj3\\frame00045.jpg", "LI\\video\\tr\\raj3\\frame00046.jpg", "LI\\video\\tr\\raj3\\frame00047.jpg", "LI\\video\\tr\\raj3\\frame00048.jpg"};
char trch1[54][50] = {"LI\\video\\tr\\ch1\\frame00001.jpg", "LI\\video\\tr\\ch1\\frame00002.jpg", "LI\\video\\tr\\ch1\\frame00003.jpg", "LI\\video\\tr\\ch1\\frame00004.jpg", "LI\\video\\tr\\ch1\\frame00005.jpg", "LI\\video\\tr\\ch1\\frame00006.jpg", "LI\\video\\tr\\ch1\\frame00007.jpg", "LI\\video\\tr\\ch1\\frame00008.jpg", "LI\\video\\tr\\ch1\\frame00009.jpg", "LI\\video\\tr\\ch1\\frame00010.jpg", "LI\\video\\tr\\ch1\\frame00011.jpg", "LI\\video\\tr\\ch1\\frame00012.jpg", "LI\\video\\tr\\ch1\\frame00013.jpg", "LI\\video\\tr\\ch1\\frame00014.jpg", "LI\\video\\tr\\ch1\\frame00015.jpg", "LI\\video\\tr\\ch1\\frame00016.jpg", "LI\\video\\tr\\ch1\\frame00017.jpg", "LI\\video\\tr\\ch1\\frame00018.jpg", "LI\\video\\tr\\ch1\\frame00019.jpg", "LI\\video\\tr\\ch1\\frame00020.jpg", "LI\\video\\tr\\ch1\\frame00021.jpg", "LI\\video\\tr\\ch1\\frame00022.jpg", "LI\\video\\tr\\ch1\\frame00023.jpg", "LI\\video\\tr\\ch1\\frame00024.jpg", "LI\\video\\tr\\ch1\\frame00025.jpg", "LI\\video\\tr\\ch1\\frame00026.jpg", "LI\\video\\tr\\ch1\\frame00027.jpg", "LI\\video\\tr\\ch1\\frame00028.jpg", "LI\\video\\tr\\ch1\\frame00029.jpg", "LI\\video\\tr\\ch1\\frame00030.jpg", "LI\\video\\tr\\ch1\\frame00031.jpg", "LI\\video\\tr\\ch1\\frame00032.jpg", "LI\\video\\tr\\ch1\\frame00033.jpg", "LI\\video\\tr\\ch1\\frame00034.jpg", "LI\\video\\tr\\ch1\\frame00035.jpg", "LI\\video\\tr\\ch1\\frame00036.jpg", "LI\\video\\tr\\ch1\\frame00037.jpg", "LI\\video\\tr\\ch1\\frame00038.jpg", "LI\\video\\tr\\ch1\\frame00039.jpg", "LI\\video\\tr\\ch1\\frame00040.jpg", "LI\\video\\tr\\ch1\\frame00041.jpg", "LI\\video\\tr\\ch1\\frame00042.jpg", "LI\\video\\tr\\ch1\\frame00043.jpg", "LI\\video\\tr\\ch1\\frame00044.jpg", "LI\\video\\tr\\ch1\\frame00045.jpg", "LI\\video\\tr\\ch1\\frame00046.jpg", "LI\\video\\tr\\ch1\\frame00047.jpg", "LI\\video\\tr\\ch1\\frame00048.jpg", "LI\\video\\tr\\ch1\\frame00049.jpg", "LI\\video\\tr\\ch1\\frame00050.jpg", "LI\\video\\tr\\ch1\\frame00051.jpg", "LI\\video\\tr\\ch1\\frame00052.jpg", "LI\\video\\tr\\ch1\\frame00053.jpg", "LI\\video\\tr\\ch1\\frame00054.jpg"};
char trch2[54][50] = {"LI\\video\\tr\\ch2\\frame00001.jpg", "LI\\video\\tr\\ch2\\frame00002.jpg", "LI\\video\\tr\\ch2\\frame00003.jpg", "LI\\video\\tr\\ch2\\frame00004.jpg", "LI\\video\\tr\\ch2\\frame00005.jpg", "LI\\video\\tr\\ch2\\frame00006.jpg", "LI\\video\\tr\\ch2\\frame00007.jpg", "LI\\video\\tr\\ch2\\frame00008.jpg", "LI\\video\\tr\\ch2\\frame00009.jpg", "LI\\video\\tr\\ch2\\frame00010.jpg", "LI\\video\\tr\\ch2\\frame00011.jpg", "LI\\video\\tr\\ch2\\frame00012.jpg", "LI\\video\\tr\\ch2\\frame00013.jpg", "LI\\video\\tr\\ch2\\frame00014.jpg", "LI\\video\\tr\\ch2\\frame00015.jpg", "LI\\video\\tr\\ch2\\frame00016.jpg", "LI\\video\\tr\\ch2\\frame00017.jpg", "LI\\video\\tr\\ch2\\frame00018.jpg", "LI\\video\\tr\\ch2\\frame00019.jpg", "LI\\video\\tr\\ch2\\frame00020.jpg", "LI\\video\\tr\\ch2\\frame00021.jpg", "LI\\video\\tr\\ch2\\frame00022.jpg", "LI\\video\\tr\\ch2\\frame00023.jpg", "LI\\video\\tr\\ch2\\frame00024.jpg", "LI\\video\\tr\\ch2\\frame00025.jpg", "LI\\video\\tr\\ch2\\frame00026.jpg", "LI\\video\\tr\\ch2\\frame00027.jpg", "LI\\video\\tr\\ch2\\frame00028.jpg", "LI\\video\\tr\\ch2\\frame00029.jpg", "LI\\video\\tr\\ch2\\frame00030.jpg", "LI\\video\\tr\\ch2\\frame00031.jpg", "LI\\video\\tr\\ch2\\frame00032.jpg", "LI\\video\\tr\\ch2\\frame00033.jpg", "LI\\video\\tr\\ch2\\frame00034.jpg", "LI\\video\\tr\\ch2\\frame00035.jpg", "LI\\video\\tr\\ch2\\frame00036.jpg", "LI\\video\\tr\\ch2\\frame00037.jpg", "LI\\video\\tr\\ch2\\frame00038.jpg", "LI\\video\\tr\\ch2\\frame00039.jpg", "LI\\video\\tr\\ch2\\frame00040.jpg", "LI\\video\\tr\\ch2\\frame00041.jpg", "LI\\video\\tr\\ch2\\frame00042.jpg", "LI\\video\\tr\\ch2\\frame00043.jpg", "LI\\video\\tr\\ch2\\frame00044.jpg", "LI\\video\\tr\\ch2\\frame00045.jpg", "LI\\video\\tr\\ch2\\frame00046.jpg", "LI\\video\\tr\\ch2\\frame00047.jpg", "LI\\video\\tr\\ch2\\frame00048.jpg", "LI\\video\\tr\\ch2\\frame00049.jpg", "LI\\video\\tr\\ch2\\frame00050.jpg", "LI\\video\\tr\\ch2\\frame00051.jpg", "LI\\video\\tr\\ch2\\frame00052.jpg", "LI\\video\\tr\\ch2\\frame00053.jpg", "LI\\video\\tr\\ch2\\frame00054.jpg"};

char dir[14][40] = {"LI\\dir\\1.bmp", "LI\\dir\\2.bmp", "LI\\dir\\3.bmp", "LI\\dir\\4.bmp", "LI\\dir\\5.bmp", "LI\\dir\\6.bmp", "LI\\dir\\7.bmp", "LI\\dir\\8.bmp", "LI\\dir\\9.bmp", "LI\\dir\\10.bmp", "LI\\dir\\11.bmp", "LI\\dir\\12.bmp", "LI\\dir\\13.bmp", "LI\\dir\\14.bmp"};

char bird[7][40] = {"LI\\1.bmp", "LI\\2.bmp", "LI\\3.bmp", "LI\\4.bmp", "LI\\5.bmp", "LI\\6.bmp", "LI\\7.bmp"};
int nbird = 1, flag = 0;

char planes[4][40] = {"LI\\p\\1.bmp", "LI\\p\\2.bmp", "LI\\p\\3.bmp", "LI\\p\\4.bmp"};
int nplane = 0;
int pd = 0, pside;

char train[4][40] = {"LI\\train\\1.bmp", "LI\\train\\2.bmp", "LI\\train\\3.bmp", "LI\\train\\4.bmp"};
char rtrain[4][40] = {"LI\\rtrain\\1.bmp", "LI\\rtrain\\2.bmp", "LI\\rtrain\\3.bmp", "LI\\rtrain\\4.bmp"};
int ntrain = 0;
int td = 0, tx = 0, ty = 0;
int tflag = 0;

char ppl[4][40] = {"LI\\SelectAn\\1.bmp", "LI\\SelectAn\\2.bmp", "LI\\SelectAn\\3.bmp", "LI\\SelectAn\\4.bmp"};
char rppl[4][40] = {"LI\\SelectAn\\5.bmp", "LI\\SelectAn\\6.bmp", "LI\\SelectAn\\7.bmp", "LI\\SelectAn\\8.bmp"};
int nppl = 0, ppd = 0, ppx = 0, pflag = 0;

void ppltemp()
{
	if (ppx > 550)
	{
		pflag = 1;
	}
	else if (ppx < 320)
	{
		pflag = 0;
	}
	if (nppl == 1)
	{
		if (pflag == 0)
			ppx = ppx + 3;
		else if (pflag == 1)
			ppx = ppx - 3;
		ppd++;
		if (ppd == 4)
			ppd = 0;
	}
}

void traintemp()
{
	if (tx > 1000)
	{
		tflag = 1;
	}
	else if (tx < 20)
	{
		tflag = 0;
	}
	if (ntrain == 1)
	{
		if (tflag == 0)
			tx = tx + 10;
		else if (tflag == 1)
			tx = tx - 10;
		td++;
		if (td == 4)
			td = 0;
	}
}

void planetemp()
{
	if (pside == 0)
	{
		if (px > 1100)
		{
			nplane = 0;
			px = 0;
		}
		if (nplane == 1)
		{
			px = px + 20;
			py = (600.0 / 1000) * px;
		}
	}
	else if (pside == 1)
	{
		// printf("%d %d %d %d\n", pside, px, py, nplane);
		if (px < 0)
		{
			nplane = 0;
			px = 0;
		}
		if (nplane == 1)
		{
			px = px - 20;
			py = (-1) * (600.0 / 1000) * px + 600;
		}
	}
	else if (pside == 2)
	{
		if (px > 1100)
		{
			nplane = 0;
			px = 0;
		}
		if (nplane == 1)
		{
			px = px + 20;
			py = (-1) * (600.0 / 1000) * px + 600;
		}
	}
	else if (pside == 3)
	{
		if (px < 0)
		{
			nplane = 0;
			px = 0;
		}
		if (nplane == 1)
		{
			px = px - 20;
			py = (600.0 / 1000) * px;
		}
	}
}
void temp()
{

	bx = bx + 20;

	if (bx > 1200)
		bx = 0;

	if (flag == 0 && ind < 6)
		ind++;
	else if (flag == 0)
	{
		flag = 1;
		ind--;
	}
	else if (flag == 1 && ind > 0)
		ind--;
	else
	{
		flag = 0;
		ind++;
	}
}

void ppls()
{
	if (pflag == 0)
	{
		iShowBMP2(ppx, 0, ppl[0], 0);
		iShowBMP2(ppx + 300, 0, ppl[1], 0);
		iShowBMP2(ppx - 100, 0, ppl[2], 0);
		iShowBMP2(ppx - 300, 0, ppl[3], 0);
	}
	else
	{
		iShowBMP2(ppx, 0, rppl[0], 0);
		iShowBMP2(ppx + 310, 0, rppl[1], 0);
		iShowBMP2(ppx - 100, 0, rppl[2], 0);
		iShowBMP2(ppx - 300, 0, rppl[3], 0);
	}
}

void trains()
{
	iShowBMP2(tx, 0, train[td], 0);
}
void plane()
{
	iShowBMP2(px, py, planes[pd], 0);
}

void birds()
{
	iShowBMP2(bx, by, bird[ind], 0);
	iShowBMP2(bx - 200, by - 90, bird[ind], 0);
}

char user[20];
int nuser = 0;
char cuser[20];
char pass[20], spass[20];
int npass = 0;
int nums = 0;
int count = 0;
void showtrips()
{
	count = 0;
	char userf[200];
	sprintf(userf, "%s.txt", cuser);
	FILE *fp = fopen(userf, "r");
	if (fp == NULL)
		printf("Error");
	int i = 0;
	char c;
	for (c = getc(fp); c != EOF; c = getc(fp))
		if (c == '\n')
			count = count + 1;
	printf("%d", count);
	fseek(fp, 0, SEEK_SET);
	for (i = 0; i < count; i++)
	{
		fgets(pt[i].place, 50, fp);
		pt[i].place[strlen(pt[i].place) - 1] = '\0';
		fgets(pt[i].tm, 50, fp);
		pt[i].tm[strlen(pt[i].tm) - 1] = '\0';
		fgets(pt[i].dater, 50, fp);
		pt[i].dater[strlen(pt[i].dater) - 1] = '\0';
		fgets(pt[i].gwr, 50, fp);
		pt[i].gwr[strlen(pt[i].gwr) - 1] = '\0';
	}
	fclose(fp);
}

bool sound = true;
int nsound = 1;

int nvid = 1;
void video();
void videoTemp();

int ndhakavid = 0;
void dhakavidButton();

int nrajvid = 0;
void rajvidButton();

int nchvid = 0;
void chvidButton();

int ntrdh1 = 0;
int ntrdh2 = 0;
int ntrdh3 = 0;
int ntrraj1 = 0;
int ntrraj2 = 0;
int ntrraj3 = 0;
int ntrch1 = 0;
int ntrch2 = 0;

int nlogin = 0;
void login();
void loginbutton();
void save();

int nacc = 0;
void acc();
void accin();
void accButton();

int nhome = 0;
void home();
void homebutton();

int ncredits = 0;
void credits();
void creditsButton();

int ntrips = 0;
int nh = 0;
void trips();
void tripsbutton();

int nselect = 0;
void select();
void selectbutton();

int ndhaka = 0;
void dhaka();
void dhakaButton();

int nraj = 0;
void raj();
void rajButton();

int nch = 0;
void ch();
void chButton();

int nlalbag = 0;
void lalbag();
int nlalbagImages = 0;
void lalbagImages();
void lalbagImagesClick();
void lalbagButton();

int nahsan = 0;
void ahsan();
int nahsanImages = 0;
void ahsanImages();
void ahsanImagesClick();
void ahsanButton();

int nparl = 0;
void parl();
int nparlImages = 0;
void parlImages();
void parlImagesClick();
void parlButton();

void backButton();

int nmaha = 0;
void maha();
int nmahaImages = 0;
void mahaImages();
void mahaImagesClick();

void mahaButton();
int npahar = 0;
void pahar();
int npaharImages = 0;
void paharImages();
void paharImagesClick();

void paharButton();
int nutt = 0;
void utt();
int nuttImages = 0;
void uttImages();
void uttImagesClick();

void uttButton();

int ncox = 0;
void cox();
int ncoxImages = 0;
void coxImages();
void coxImagesClick();
void coxButton();

int nsaj = 0;
void saj();
int nsajImages = 0;
void sajImages();
void sajImagesClick();
void sajButton();

int ndhakadir = 0;
void dirfClick();
void dirf();
int ncar = 0;
int nbus = 0;
int sbus = 0;
int strain = 0;

int nroad = 0;
int nrail = 0;

int nelsedir = 0;

void iDraw()
{
	// place your drawing codes here
	iClear();
	// printf("%d\n", ntrips);
	if (nvid == 1 || ndhakavid == 1 || nrajvid == 1 || nchvid == 1 || ntrdh1 == 1 || ntrdh2 == 1 || ntrdh3 == 1 || ntrraj1 == 1 || ntrraj2 == 1 || ntrraj3 == 1 || ntrch1 == 1 || ntrch2 == 1)
		video();
	if (nacc == 1)
	{
		acc();
		iSetColor(0, 0, 0);
		iText(417, 414, user, GLUT_BITMAP_HELVETICA_18);
		iText(417, 359, pass, GLUT_BITMAP_HELVETICA_18);
		iSetColor(255, 255, 255);
		if (acr == 1)
			iText(417, 60, "Account Created!", GLUT_BITMAP_HELVETICA_18);
	}
	if (nlogin == 1)
	{
		login();
		iSetColor(0, 0, 0);
		if (auth == -1)
		{
			iText(670, 353, user, GLUT_BITMAP_HELVETICA_18);
			iText(670, 280, spass, GLUT_BITMAP_HELVETICA_18);
		}
		else if (auth == 0)
		{
			iSetColor(255, 0, 0);
			strcpy(user, "Wrong Username");
			iText(670, 353, user, GLUT_BITMAP_HELVETICA_18);
			iText(670, 280, spass, GLUT_BITMAP_HELVETICA_18);
		}
		else if (auth == 2)
		{
			iSetColor(255, 0, 0);
			strcpy(spass, "Wrong Password");
			iText(670, 353, user, GLUT_BITMAP_HELVETICA_18);
			iText(670, 280, spass, GLUT_BITMAP_HELVETICA_18);
		}
	}

	if (nhome == 1)
	{
		home();
		char g[30];
		sprintf(g, "Welcome %s", cuser);
		iText(20, 550, g, GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if (ncredits == 1)
		credits();

	if (nh == 1)
		trips();

	if (nselect == 1)
		select();
	if (ndhaka == 1)
		dhaka();
	if (nraj == 1)
		raj();
	if (nch == 1)
		ch();
	if (nlalbag == 1)
		lalbag();
	if (nahsan == 1)
		ahsan();
	if (nparl == 1)
		parl();
	if (nutt == 1)
		utt();
	if (npahar == 1)
		pahar();
	if (nmaha == 1)
		maha();
	if (ncox == 1)
		cox();
	if (nsaj == 1)
		saj();
	if (nlalbagImages == 1)
		lalbagImages();
	if (nahsanImages == 1)
		ahsanImages();
	if (nparlImages == 1)
		parlImages();
	if (nmahaImages == 1)
		mahaImages();
	if (npaharImages == 1)
		paharImages();
	if (nuttImages == 1)
		uttImages();
	if (ncoxImages == 1)
		coxImages();
	if (nsajImages == 1)
		sajImages();
	if (ndhakadir == 1 || nelsedir == 1)
		dirf();
	// printf("%d", ndhaka);
	if (nsound == 0)
		iShowBMP2(890, 490, "LI\\sOFF.bmp", 0);
	if (nsound == 1)
		iShowBMP2(890, 490, "LI\\sON.bmp", 0);
	// if (nbird == 1)
	// 	birds();
	if (nplane == 1)
		plane();

	if (ntrain == 1)
	{
		if (tflag == 0)
			iShowBMP2(tx, 0, train[td], 0);
		else if (tflag == 1)
			iShowBMP2(tx, 0, rtrain[td], 0);
	}
	if (nppl == 1)
		ppls();

	if (nres == 1)
	{
		if (sbus == 1)
			iShowBMP(0, 0, "LI\\RES1.bmp");
		else if (strain == 1)
			iShowBMP(0, 0, "LI\\RES2.bmp");
		else iShowBMP(0, 0, "LI\\RES.bmp");
	}
	if (nres == 1)
	{
		iText(401, 273, date, GLUT_BITMAP_HELVETICA_18);
	}
	if (nres == 1)
	{
		iText(402, 168, gw, GLUT_BITMAP_HELVETICA_18);
	}
	// printf("%d %s", ndate, date);
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	// place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
int iu = 0, ip = 0;
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (nhome == 1 || ndhaka == 1 || nraj == 1 || nch == 1))
	{

		pside = rand() % 4;

		if (pside == 0)
		{
			px = 0;
			pd = 0;
		}
		else if (pside == 1)
		{
			px = 1000;
			pd = 1;
		}
		else if (pside == 2)
		{
			px = 0;
			pd = 3;
		}
		else if (pside == 3)
		{
			px = 1000;
			pd = 2;
		}

		nplane = 1;
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		if (mx >= 890 && mx <= 980 && my >= 490 && my <= 580)
		{
			if (nsound == 0)
			{
				nsound = 1;
				if (nchvid == 1)
					PlaySound("LI\\sound\\chsnd.wav", NULL, SND_LOOP | SND_ASYNC);
				if (nrajvid == 1)
					PlaySound("LI\\sound\\rajsnd.wav", NULL, SND_LOOP | SND_ASYNC);
				if (ndhakavid == 1)
					PlaySound("LI\\sound\\dhsnd.wav", NULL, SND_LOOP | SND_ASYNC);
				if (nvid == 1)
					PlaySound("LI\\sound\\vidsound.wav", NULL, SND_ASYNC);
				if (nlogin == 1)
					PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
				if (nhome == 1 || nselect == 1 || ncredits == 1 || nh == 1) //|| //ntrips == 1)
					PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
				else if (ndhaka == 1 || nlalbag == 1 || nahsan == 1 || nparl == 1)
					PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
				else if (nraj == 1 || nmaha == 1 || npahar == 1 || nutt == 1)
					PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
				else if (nch == 1 || ncox == 1 || nsaj == 1)
					PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			else
			{
				nsound = 0;
				PlaySound(0, 0, 0);
			}
		}
		if (nacc == 1 && mx >= 48 && mx <= 145 && my >= 522 && my <= 562)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nlogin == 1 && mx >= 681 && mx <= 821 && my >= 50 && my <= 110)
		{
			iu = 0;
			ip = 0;
			user[0] = '\0';
			pass[0] = '\0';
			spass[0] = '\0';
			accButton();
		}
		if (nacc == 1 && mx >= 373 && mx <= 625 && my >= 404 && my <= 446)
		{
			nuser = 1;
			npass = 0;
		}
		if (nacc == 1 && mx >= 373 && mx <= 621 && my >= 341 && my <= 387)
		{
			nuser = 0;
			npass = 1;
		}
		if (nacc == 1 && mx >= 378 && mx <= 623 && my >= 255 && my <= 300)
		{
			accin();
			user[0] = '\0';
			pass[0] = '\0';
			iu = 0;
			ip = 0;
		}
		if (nlogin == 1 && mx >= 543 && mx <= 897 && my >= 342 && my <= 375)
		{
			if (auth == 0 || auth == 2)
			{
				user[0] = '\0';
				pass[0] = '\0';
				spass[0] = '\0';
				auth = -1;
				iu = 0;
				ip = 0;
			}
			nuser = 1;
			npass = 0;
		}
		if (nlogin == 1 && mx >= 543 && mx <= 896 && my >= 265 && my <= 301)
		{
			if (auth == 0 || auth == 2)
			{
				pass[0] = '\0';
				spass[0] = '\0';
				auth = -1;
				iu = 0;
				ip = 0;
			}
			npass = 1;
			nuser = 0;
		}

		if (nlogin == 1 && mx >= 669 && mx <= 842 && my >= 142 && my <= 182 && user[0] != '\0' && pass[0] != '\0') //
		{
			check();
			mx = 0;
			my = 0;
			if (auth == 1)
			{
				auth = -1;
				strcpy(cuser, user);
				user[0] = '\0';
				pass[0] = '\0';
				spass[0] = '\0';
				homebutton();
				filecreate();
			}
		}

		if (nhome == 1 && mx >= 647 && mx <= 903 && my >= 360 && my <= 407)
		{
			selectbutton();
			mx = a, my = b;
		}
		if (nhome == 1 && mx >= 657 && mx <= 953 && my >= 270 && my <= 315)
		{
			mx = 0;
			my = 0;
			tripsbutton();
		}
		if (nhome == 1 && mx >= 651 && mx <= 935 && my >= 201 && my <= 236)
		{
			creditsButton();
		}
		if (nhome == 1 && mx >= 661 && mx <= 856 && my >= 100 && my <= 169)
		{
			exit(0);
		}
		if (nhome == 1 && mx >= 22 && mx <= 198 && my >= 60 && my <= 88)
		{
			backButton();
		}
		if (nselect == 1 && mx >= 150 && mx <= 287 && my >= 342 && my <= 442)
		{
			// dhakaButton();
			dhakavidButton();
			mx = 0;
			my = 0;
		}
		if (nselect == 1 && mx >= 431 && mx <= 565 && my >= 342 && my <= 439)
		{
			rajvidButton();
			mx = 0;
			my = 0;
		}
		if (nselect == 1 && mx >= 715 && mx <= 903 && my >= 342 && my <= 400)
		{
			chvidButton();
			mx = 0;
			my = 0;
		}

		if (ndhaka == 1 && mx >= 68 && mx <= 369 && my >= 404 && my <= 462)
		{
			ntrdh1 = 1;
			ndhaka = 0;
		}
		if (ndhaka == 1 && mx >= 70 && mx <= 373 && my >= 272 && my <= 332)
		{
			ntrdh2 = 1;
			ndhaka = 0;
		}
		if (ndhaka == 1 && mx >= 68 && mx <= 473 && my >= 146 && my <= 202)
		{
			ntrdh3 = 1;
			ndhaka = 0;
		}

		if (nraj == 1 && mx >= 654 && mx <= 859 && my >= 355 && my <= 389)
		{
			ntrraj2 = 1;
			nraj = 0;
		}
		if (nraj == 1 && mx >= 660 && mx <= 963 && my >= 263 && my <= 298)
		{
			ntrraj3 = 1;
			nraj = 0;
		}
		if (nraj == 1 && mx >= 663 && mx <= 972 && my >= 169 && my <= 202)
		{
			ntrraj1 = 1;
			nraj = 0;
		}

		if (nch == 1 && mx >= 114 && mx <= 361 && my >= 97 && my <= 355)
		{
			ntrch1 = 1;
			nch = 0;
		}
		if (nch == 1 && mx >= 626 && mx <= 899 && my >= 78 && my <= 353)
		{
			ntrch2 = 1;
			nch = 0;
		}
		if (nlalbag == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nlalbag == 1 && mx >= 353 && mx <= 646 && my >= 46 && my <= 95)
			lalbagImagesClick();
		if (nlalbag == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (nahsan == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nahsan == 1 && mx >= 353 && mx <= 646 && my >= 46 && my <= 95)
			ahsanImagesClick();
		if (nahsan == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (nparl == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nparl == 1 && mx >= 353 && mx <= 646 && my >= 46 && my <= 95)
			parlImagesClick();
		if (nparl == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (npahar == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (npahar == 1 && mx >= 353 && mx <= 646 && my >= 46 && my <= 95)
			paharImagesClick();
		if (npahar == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (nmaha == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nmaha == 1 && mx >= 353 && mx <= 646 && my >= 46 && my <= 95)
			mahaImagesClick();
		if (nmaha == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (nutt == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nutt == 1 && mx >= 353 && mx <= 646 && my >= 46 && my <= 95)
			uttImagesClick();
		if (nutt == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (ncox == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (ncox == 1 && mx >= 377 && mx <= 638 && my >= 38 && my <= 82)
			coxImagesClick();
		if (ncox == 1 && mx >= 72 && mx <= 275 && my >= 40 && my <= 82)
			dirfClick();

		if (nsaj == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nsaj == 1 && mx >= 377 && mx <= 638 && my >= 38 && my <= 82)
			sajImagesClick();
		if (nsaj == 1 && mx >= 61 && mx <= 228 && my >= 55 && my <= 88)
			dirfClick();

		if (ndhaka == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nraj == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nch == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nselect == 1 && mx >= 56 && mx <= 165 && my >= 523 && my <= 560)
		{
			mx = 0;
			my = 0;
			backButton();
		}

		if (ndhakadir == 1 && mx >= 60 && mx <= 172 && my >= 524 && my <= 562)
		{
			mx = 0;
			my = 0;
			backButton();
		}
		if (nelsedir == 1 && mx >= 60 && mx <= 172 && my >= 524 && my <= 562)
		{
			mx = 0;
			my = 0;
			backButton();
		}

		if (ndhakadir == 1 && mx >= 603 && mx <= 841 && my >= 247 && my <= 399)
			ncar = 1;
		if (ndhakadir == 1 && mx >= 107 && mx <= 455 && my >= 240 && my <= 408)
			nbus = 1;

		if (nelsedir == 1 && mx >= 135 && mx <= 375 && my >= 247 && my <= 358)
			nroad = 1;
		if (nelsedir == 1 && mx >= 652 && mx <= 840 && my >= 256 && my <= 411)
			nrail = 1;

		if ((ncar == 1 || nbus == 1) && mx >= 60 && mx <= 172 && my >= 524 && my <= 562)
		{
			ncar = 0;
			nbus = 0;
		} // backButton();
		if ((nroad == 1 || nrail == 1) && mx >= 60 && mx <= 172 && my >= 524 && my <= 562)
		{
			nroad = 0;
			nrail = 0;
		}

		if ((npahar == 1 || nmaha == 1 || nutt == 1 || nsaj == 1 || ncox == 1 || nahsan == 1 || nparl == 1 || nlalbag == 1) && mx >= 757 && mx <= 955 && my >= 50 && my <= 96)
		{
			nres = 1;
		}
		if (nres == 1 && mx >= 755 && mx <= 959 && my >= 50  && my <= 96)
		{
			mx = 0; my = 0;	
			if (ncox==1)
				strcpy(wx.place, "Cox's Bazar");
			else if (nsaj==1)
				strcpy(wx.place, "Sajek Valley");
			else if (nlalbag==1)
				strcpy(wx.place, "Lalbag Fort");
			else if (nahsan==1)
				strcpy(wx.place, "Ahsan Manjil");
			else if (nparl==1)
				strcpy(wx.place, "National Parilament");
			else if (npahar == 1)
				{strcpy(wx.place, "Paharpur");printf("isher");}
			else if (nmaha ==1)
				{strcpy(wx.place, "Mahasthangar");}
			else if (nutt ==1)
				{strcpy(wx.place, "Uttara Ganabhaban");}
			
		}
		if (nres == 1 && mx >= 585 && mx <= 785 && my >= 407 && my <= 454)
		{
			strcpy(wx.tm, "Train");
			strain = 1;
			sbus = 0;
		}
		if (nres == 1 && mx >= 389 && mx <= 500 && my >= 400 && my <= 454)
		{
			strcpy(wx.tm, "Bus");
			sbus = 1;
			strain = 0;
		}
		if (nres == 1 && mx >= 390 && mx <= 697 && my >= 258 && my <= 310)
		{
			ndate = 1;
			ngw = 0;
		}
		if (nres == 1 && mx <= 390 && mx >= 697 && my <= 258 && my >= 310)
		{
			ndate = 0;
		}
		if (nres == 1 && mx >= 388 && mx <= 700 && my >= 158 && my <= 210)
		{
			ngw = 1;
			ndate = 0;
		}
		if (nres == 1 && mx <= 390 && mx >= 697 && my <= 258 && my >= 310)
		{
			ngw = 0;
		}
		if (nres == 1 && mx >= 842 && mx <= 953 && my >= 228 && my <= 336)
		{
			save();
			id = 0;
			ingw = 0;

			nres = 0;
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		// place your codes here
		printf("%d %d\n", mx, my);
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/

void iKeyboard(unsigned char key)
{
	if (nuser == 1)
	{
		if (key == '\r')
		{
			key = '\0';
			npass = 1;
			nuser = 0;
		}
		else if (key == '\b')
		{
			if (iu >= 0)
			{
				user[iu - 1] = '\0';
				iu--;
			}
		}
		else if (iu < 20)
		{
			user[iu] = key;
			user[iu + 1] = '\0';
			iu++;
		}
	}
	if (npass == 1)
	{
		if (key == '\r')
		{
			nuser = 0;
			npass = 0;
		}
		else if (key == '\b')
		{
			if (ip >= 0)
			{
				pass[ip - 1] = '\0';
				spass[ip - 1] = '\0';
				ip--;
			}
		}
		else if (ip < 20 && key != '\0')
		{
			pass[ip] = key;
			pass[ip + 1] = '\0';
			spass[ip] = '*';
			spass[ip + 1] = '\0';

			ip++;
		}
	}

	if (ndate == 1)
	{
		if (key == '\r')
		{
			strcpy(wx.dater, date);
			ndate = 0;
			id = 0;
		}
		else if (key == '\b')
		{
			if (id >= 0)
			{
				date[id - 1] = '\0';
				id--;
			}
		}
		else if (id < 20)
		{
			date[id] = key;
			date[id + 1] = '\0';
			id++;
		}
	}
	if (ngw == 1)
	{
		if (key == '\r')
		{
			strcpy(wx.gwr, gw);
			ngw = 0;
			ingw = 0;
		}
		else if (key == '\b')
		{
			if (ingw >= 0)
			{
				gw[ingw - 1] = '\0';
				ingw--;
			}
		}
		else if (ingw < 20)
		{
			gw[ingw] = key;
			gw[ingw + 1] = '\0';
			ingw++;
		}
	}

	if (key == 'q')
	{
		exit(0);
	}
	// place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

	// if ((nroad == 1 || nrail == 1) && key == GLUT_KEY_LEFT)
	// 	{
	// 		nroad = 0;
	// 		nrail = 0;
	// 	}

	if ((nlalbagImages == 1 || nahsanImages == 1 || nparlImages == 1 || nmahaImages == 1 || npaharImages == 1 || nuttImages == 1 || ncoxImages == 1 || nsajImages == 1) && key == GLUT_KEY_RIGHT)
		ind++;
	else if ((nlalbagImages == 1 || nahsanImages == 1 || nparlImages == 1 || nmahaImages == 1 || npaharImages == 1 || nuttImages == 1 || ncoxImages == 1 || nsajImages == 1) && key == GLUT_KEY_LEFT)
		ind--;
	else if (key == GLUT_KEY_LEFT)
	{
		backButton();
		key = '\0';
	}
}

void video()
{
	if (nvid == 1)
		iShowBMP(0, 0, vid[vidi]);
	else if (ndhakavid == 1)
	{
		iShowBMP(0, 0, dhakaVid[vidi]);

		// PlaySound("LI\\sound\\dhsnd.wav", NULL, SND_ASYNC);
	}
	else if (nrajvid == 1)
	{
		iShowBMP(0, 0, rajvid[vidi]);
	}
	else if (nchvid == 1)
	{
		iShowBMP(0, 0, chvid[vidi]);
	}
	else if (ntrdh1 == 1)
		iShowBMP(0, 0, trdh1[vidi]);
	else if (ntrdh2 == 1)
		iShowBMP(0, 0, trdh2[vidi]);
	else if (ntrdh3 == 1)
		iShowBMP(0, 0, trdh3[vidi]);
	else if (ntrraj1 == 1)
		iShowBMP(0, 0, trraj1[vidi]);
	else if (ntrraj2 == 1)
		iShowBMP(0, 0, trraj2[vidi]);
	else if (ntrraj3 == 1)
		iShowBMP(0, 0, trraj3[vidi]);
	else if (ntrch1 == 1)
		iShowBMP(0, 0, trch1[vidi]);
	else if (ntrch2 == 1)
		iShowBMP(0, 0, trch2[vidi]);
}
void vidend()
{
	if (nvid == 1)
	{
		nvid = 0;
		nlogin = 1;
		loginbutton();
		vidi = 0;
	}
	else if (ndhakavid == 1)
	{
		ndhakavid = 0;
		dhakaButton();
		vidi = 0;
	}
	else if (nrajvid == 1)
	{
		nrajvid = 0;
		rajButton();
		vidi = 0;
	}
	else if (nchvid == 1)
	{
		nchvid = 0;
		chButton();
		vidi = 0;
	}
	else if (ntrdh1 == 1)
	{
		ntrdh1 = 0;
		lalbagButton();
		vidi = 0;
	}
	else if (ntrdh2 == 1)
	{
		ntrdh2 = 0;
		ahsanButton();
		vidi = 0;
	}
	else if (ntrdh3 == 1)
	{
		ntrdh3 = 0;
		parlButton();
		vidi = 0;
	}
	else if (ntrraj1 == 1)
	{
		ntrraj1 = 0;
		uttButton();
		vidi = 0;
	}
	else if (ntrraj2 == 1)
	{
		ntrraj2 = 0;
		paharButton();
		vidi = 0;
	}
	else if (ntrraj3 == 1)
	{
		ntrraj3 = 0;
		mahaButton();
		vidi = 0;
	}
	else if (ntrch1 == 1)
	{
		ntrch1 = 0;
		coxButton();
		vidi = 0;
	}
	else if (ntrch2 == 1)
	{
		ntrch2 = 0;
		sajButton();
		vidi = 0;
	}
}

void videoTemp()
{
	if (nvid == 1)
	{
		if (vidi < 470)
			vidi++;
		else
			vidend();
	}
}

void videoTemp2()
{
	if (ndhakavid == 1)
	{
		if (vidi < 432)
			vidi++;
		else
			vidend();
	}
	else if (nrajvid == 1)
	{
		if (vidi < 570)
			vidi++;
		else
			vidend();
	}
	else if (nchvid == 1)
	{
		if (vidi < 610)
			vidi++;
		else
			vidend();
	}
}

void trvideotemp()
{
	if (ntrdh1 == 1)
	{
		if (vidi < 38)
			vidi++;
		else
			vidend();
	}
	else if (ntrdh2 == 1)
	{
		if (vidi < 38)
			vidi++;
		else
			vidend();
	}
	else if (ntrdh3 == 1)
	{
		if (vidi < 37)
			vidi++;
		else
			vidend();
	}
	else if (ntrraj1 == 1)
	{
		if (vidi < 45)
			vidi++;
		else
			vidend();
	}
	else if (ntrraj2 == 1)
	{
		if (vidi < 45)
			vidi++;
		else
			vidend();
	}
	else if (ntrraj3 == 1)
	{
		if (vidi < 45)
			vidi++;
		else
			vidend();
	}
	else if (ntrch1 == 1)
	{
		if (vidi < 50)
			vidi++;
		else
			vidend();
	}
	else if (ntrch2 == 1)
	{
		if (vidi < 50)
			vidi++;
		else
			vidend();
	}
}

// void dhakavideotemp()
// {
// 	if(ndhakavid == 1)
// 	{
// 		if(vidi<432)
// 			vidi++;
// 		else
// 			vidend();
// 	}
// }

void acc()
{
	iShowBMP(0, 0, "LI\\acc.bmp");
}

void accin()
{
	FILE *fp = fopen("LI\\files\\user.txt", "a");
	FILE *fp2 = fopen("LI\\files\\pass.txt", "a");
	if (fp == NULL)
		printf("Error");
	fputs(user, fp);
	fputs("\n", fp);
	fputs(pass, fp2);
	fputs("\n", fp2);
	fclose(fp);
	fclose(fp2);
	acr = 1;
}

void accButton()
{
	nlogin = 0;
	nacc = 1;
	user[0] = '\0';
	pass[0] = '\0';
	spass[0] = '\0';
}

void login()
{

	iShowBMP(0, 0, "LI\\login.BMP");
}

void save()
{
	printf("%s\n", wx.place);
	char userf[200];
	sprintf(userf, "%s.txt", cuser);
	FILE *fp = fopen(userf, "a");
	if (fp == NULL)
		printf("Error");
	// fseek(fp, 0, SEEK_SET);
	fputs(wx.place, fp);
	fputs("\n", fp);
	fputs(wx.tm, fp);
	fputs("\n", fp);
	fputs(date, fp);
	fputs("\n", fp);
	fputs(gw, fp);
	fputs("\n", fp);
	//strcpy(wx.place, "aaaaaa");
	date[0] = '\0';
	gw[0] = '\0';
	sbus = 0;
	strain = 0;
	ingw = 0;
	fclose(fp);
}

void filecreate()
{
	char userf[200];
	sprintf(userf, "%s.txt", cuser);
	FILE *fp = fopen(userf, "a");
	if (fp == NULL)
		printf("Error");
	fclose(fp);
}

int check()
{
	FILE *fp = fopen("LI\\files\\user.txt", "r");
	FILE *fp2 = fopen("LI\\files\\pass.txt", "r");
	if (fp == NULL)
		printf("Error");
	if (fp2 == NULL)
		printf("Error");

	int pos = 0, flag = 0;
	char tempu[20];
	while (!feof(fp))
	{
		fgets(tempu, 20, fp);
		(tempu[strlen(tempu) - 1] == '\n') ? (tempu[strlen(tempu) - 1] = '\0') : 1;

		if (strcmp(tempu, user) == 0)
		{
			flag = 1;
			break;
		}
		pos++;
	}
	if (flag == 0)
		return auth = 0;
	for (int i = 0; i < pos; i++)
		fgets(tempu, 20, fp2);
	fgets(tempu, 20, fp2);
	(tempu[strlen(tempu) - 1] == '\n') ? (tempu[strlen(tempu) - 1] = '\0') : 1;
	if (strcmp(tempu, pass) == 0)
	{
		return auth = 1;
	}
	else
		return auth = 2;
}

void home()
{
	iShowBMP(0, 0, "LI\\Explore.bmp");
}

void loginbutton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
	nvid = 0;
	gw[0]='\0';
	nacc = 0;
	nhome = 0;
	ntrain = 0;
	nbird = 0;
	nlogin = 1;
}

void trips()
{
	iShowBMP(0, 0, "LI\\trips.bmp");
	int nx = 0;
	int dy = 0;
	for (int i = (count / 4) - 1; nx < (count / 4); i--)
	{
		iText(100, 420 - dy, pt[i].place, GLUT_BITMAP_HELVETICA_18);
		iText(345, 420 - dy, pt[i].tm, GLUT_BITMAP_HELVETICA_18);
		iText(640, 420 - dy, pt[i].gwr, GLUT_BITMAP_HELVETICA_18);
		iText(830, 420 - dy, pt[i].dater, GLUT_BITMAP_HELVETICA_18);
		nx++;
		dy += 50;
	}
	printf("%d", count);
	// for(int i = 0; i<4; i++)
	// {
	// 	printf("%s\n", pt[i].place);
	// 	printf("%s\n", pt[i].tm);
	// 	printf("%s\n", pt[i].dater);
	// 	printf("%s\n", pt[i].gwr);
	// 	printf("\n");

	// }
}

void tripsbutton()
{

	ntrips = 2;
	nh = 1;
	nhome = 0;
	showtrips();
}

void homebutton()
{
	iu = 0;
	ip = 0;
	ncredits = 0;
	nlogin = 0;
	nppl = 0;
	ntrain = 1;
	nselect = 0;
	nhome = 1;
	nbird = 0;
	ntrips = 0;
	nh = 0;
}
void creditsButton()
{
	ncredits = 1;
	nhome = 0;
}
void selectbutton()
{
	nppl = 1;
	ntrain = 0;
	nplane = 1;
	nhome = 0;
	nselect = 1;
	ndhaka = 0;
	nraj = 0;
	nch = 0;
	nbird = 0;
}

void credits()
{
	iShowBMP(0, 0, "LI\\credits.bmp");
}

void select()
{

	iShowBMP(0, 0, "LI\\div.bmp");
}

void dhaka()
{
	iShowBMP(0, 0, "LI\\DHAKA.bmp");
}

void dhakavidButton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("LI\\sound\\dhsnd.wav", NULL, SND_LOOP | SND_ASYNC);
	nselect = 0;
	ndhakavid = 1;
	nppl = 0;
}

void rajvidButton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("LI\\sound\\rajsnd.wav", NULL, SND_LOOP | SND_ASYNC);
	nselect = 0;
	nrajvid = 1;
	nppl = 0;
}

void chvidButton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("LI\\sound\\chsnd.wav", NULL, SND_LOOP | SND_ASYNC);
	nselect = 0;
	nchvid = 1;
	nppl = 0;
}

void dhakaButton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
	// ndhakavid = 0;
	nppl = 0;
	nhome = 0;
	nselect = 0;
	nlalbag = 0;
	nahsan = 0;
	nparl = 0;
	ndhaka = 1;
	nvid = 0;
	ndhakavid = 0;
}

void raj()
{
	iShowBMP(0, 0, "LI\\RAJSHAHI.bmp");
}

void rajButton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);

	nppl = 0;
	nselect = 0;
	nutt = 0;
	npahar = 0;
	nmaha = 0;
	nraj = 1;
	nrajvid = 0;
}

void ch()
{
	iShowBMP(0, 0, "LI\\ch.bmp");
}

void chButton()
{
	PlaySound(0, 0, 0);
	if (nsound == 1)
		PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);

	nppl = 0;
	nhome = 0;
	nselect = 0;
	ncox = 0;
	nsaj = 0;
	nch = 1;
	nchvid = 0;
}

void lalbag()
{
	iShowBMP(0, 0, "LI\\Lalbagh.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void lalbagImages()
{
	char lal[5][40] = {"LI\\Lalbagh\\2.bmp", "LI\\Lalbagh\\3.bmp", "LI\\Lalbagh\\4.bmp", "LI\\Lalbagh\\5.bmp", "LI\\Lalbagh\\6.bmp"};

	if (ind < 5 && ind >= 0)
	{
		iShowBMP(0, 0, lal[ind]);
	}

	else if (ind == 5 || ind < 0)
	{
		ind = 0;
		nlalbagImages = 0;
		lalbagButton();
	}
}

void lalbagImagesClick()
{
	nlalbag = 0;
	nlalbagImages = 1;
}

void lalbagButton()
{
	ntrdh1 = 0;
	ndhaka = 0;
	nlalbag = 1;
}

void ahsan()
{
	iShowBMP(0, 0, "LI\\AHSAN.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void ahsanImages()
{
	char ahsan[4][40] = {"LI\\ahsan\\2.bmp", "LI\\ahsan\\3.bmp", "LI\\ahsan\\4.bmp", "LI\\ahsan\\5.bmp"};

	if (ind < 4 && ind >= 0)
	{
		iShowBMP(0, 0, ahsan[ind]);
	}

	else if (ind == 4 || ind < 0)
	{
		ind = 0;
		nahsanImages = 0;
		ahsanButton();
	}
}

void ahsanImagesClick()
{
	nahsan = 0;
	nahsanImages = 1;
}

void ahsanButton()
{
	ndhaka = 0;
	nahsan = 1;
}

void parl()
{
	iShowBMP(0, 0, "LI\\NP.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void parlImages()
{
	char parl[4][40] = {"LI\\parl\\2.bmp", "LI\\parl\\3.bmp", "LI\\parl\\4.bmp", "LI\\parl\\5.bmp"};

	if (ind < 4 && ind >= 0)
	{
		iShowBMP(0, 0, parl[ind]);
	}

	else if (ind == 4 || ind < 0)
	{
		ind = 0;
		nparlImages = 0;
		parlButton();
	}
}

void parlImagesClick()
{
	nparl = 0;
	nparlImages = 1;
}

void parlButton()
{
	ndhaka = 0;
	nparl = 1;
}

void maha()
{
	iShowBMP(0, 0, "LI\\Maha.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void mahaImages()
{
	char maha[4][40] = {"LI\\maha\\2.bmp", "LI\\maha\\3.bmp", "LI\\maha\\4.bmp", "LI\\maha\\5.bmp"};

	if (ind < 4 && ind >= 0)
	{
		iShowBMP(0, 0, maha[ind]);
	}

	else if (ind == 4 || ind < 0)
	{
		ind = 0;
		nmahaImages = 0;
		mahaButton();
	}
}

void mahaImagesClick()
{
	nmaha = 0;
	nmahaImages = 1;
}

void mahaButton()
{
	nraj = 0;
	nmaha = 1;
}

void pahar()
{
	iShowBMP(0, 0, "LI\\Paharpur.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void paharImages()
{
	char pahar[3][40] = {"LI\\pahar\\2.bmp", "LI\\pahar\\3.bmp", "LI\\pahar\\4.bmp"};

	if (ind < 3 && ind >= 0)
	{
		iShowBMP(0, 0, pahar[ind]);
	}

	else if (ind == 3 || ind < 0)
	{
		ind = 0;
		npaharImages = 0;
		paharButton();
	}
}

void paharImagesClick()
{
	npahar = 0;
	npaharImages = 1;
}

void paharButton()
{
	nraj = 0;
	npahar = 1;
}

void utt()
{
	iShowBMP(0, 0, "LI\\utt.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void uttImages()
{
	char utt[4][40] = {"LI\\utt\\2.bmp", "LI\\utt\\3.bmp", "LI\\utt\\4.bmp", "LI\\utt\\5.bmp"};

	if (ind < 4 && ind >= 0)
	{
		iShowBMP(0, 0, utt[ind]);
	}

	else if (ind == 4 || ind < 0)
	{
		ind = 0;
		nuttImages = 0;
		uttButton();
	}
}

void uttImagesClick()
{
	nutt = 0;
	nuttImages = 1;
}

void uttButton()
{
	nraj = 0;
	nutt = 1;
}

void cox()
{
	iShowBMP(0, 0, "LI\\coc.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void coxImages()
{
	char cox[4][40] = {"LI\\cox\\2.bmp", "LI\\cox\\3.bmp", "LI\\cox\\4.bmp", "LI\\cox\\1.bmp"};

	if (ind < 4 && ind >= 0)
	{
		iShowBMP(0, 0, cox[ind]);
	}

	else if (ind == 4 || ind < 0)
	{
		ind = 0;
		ncoxImages = 0;
		coxButton();
	}
}

void coxImagesClick()
{
	ncox = 0;
	ncoxImages = 1;
}

void coxButton()
{
	nch = 0;
	ncox = 1;
}

void saj()
{
	iShowBMP(0, 0, "LI\\saj.bmp");
	// iShowBMP2(55, 46, "LI\\Direction.bmp", 0);
}

void sajImages()
{
	char saj[4][40] = {"LI\\saj\\2.bmp", "LI\\saj\\3.bmp", "LI\\saj\\4.bmp", "LI\\saj\\1.bmp"};

	if (ind < 4 && ind >= 0)
	{
		iShowBMP(0, 0, saj[ind]);
	}

	else if (ind == 4 || ind < 0)
	{
		ind = 0;
		nsajImages = 0;
		sajButton();
	}
}

void sajImagesClick()
{
	nsaj = 0;
	nsajImages = 1;
}

void sajButton()
{
	nch = 0;
	nsaj = 1;
}

void backButton()
{

	PlaySound(0, 0, 0);

	if (nsound == 1)
	{
		if (nhome == 1 || nselect == 1)
			PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (ndhaka == 1 || nlalbag == 1 || nahsan == 1 || nparl == 1)
			PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (nlalbag == 2 || nahsan == 2 || nparl == 2)
			PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (nmaha == 2 || npahar == 2 || nutt == 2)
			PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (nraj == 1 || nmaha == 1 || npahar == 1 || nutt == 1)
			PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (nch == 1 || ncox == 1 || nsaj == 1)
			PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	if (ncredits == 1)
		homebutton();
	else if (nvid == 1)
	{
		vidi = 0;
		loginbutton();
	}
	else if (ndhakavid == 1)
	{
		vidi = 0;
		dhakaButton();
		vidi = 0;
	}
	else if (nrajvid == 1)
	{
		vidi = 0;
		rajButton();
		vidi = 0;
	}
	else if (nchvid == 1)
	{
		vidi = 0;
		chButton();
		vidi = 0;
	}

	else if (nh == 1) // ntrips == 1)
		homebutton();
	else if (nhome == 1)
	{
		loginbutton();
		spass[0] = '\0';
	}
	else if (nacc == 1)
	{
		loginbutton();
		acr = 0;
		iu = 0;
		ip = 0;
		user[0] = '\0';
		pass[0] = '\0';
		spass[0] = '\0';
	}

	else if (nselect == 1)
		homebutton();
	else if (nlalbag == 1 || nahsan == 1 || nparl == 1)
	{
		dhakaButton();
	}
	else if (nutt == 1 || npahar == 1 || nmaha == 1)
		rajButton();
	else if (ncox == 1 || nsaj == 1)
		chButton();
	else if (nraj == 1 || ndhaka == 1 || nch == 1)
	{
		selectbutton();
	}
	else if (ncar == 1 || nbus == 1)
	{
		ncar = 0;
		nbus = 0;
	}
	else if (nroad == 1 || nrail == 1)
	{
		nroad = 0;
		nrail = 0;
	}
	else if (ndhakadir == 1 && nlalbag == 2)
	{
		ndhakadir = 0;
		nlalbag = 1;
	}

	else if (ndhakadir == 1 && nahsan == 2)
	{
		ndhakadir = 0;
		nahsan = 1;
	}

	else if (ndhakadir == 1 && nparl == 2)
	{
		ndhakadir = 0;
		nparl = 1;
	}

	else if (nelsedir == 1 && npahar == 2)
	{
		nelsedir = 0;
		npahar = 1;
	}

	else if (nelsedir == 1 && nmaha == 2)
	{
		nelsedir = 0;
		nmaha = 1;
	}

	else if (nelsedir == 1 && nutt == 2)
	{
		nelsedir = 0;
		nutt = 1;
	}

	else if (nelsedir == 1 && ncox == 2)
	{
		nelsedir = 0;
		ncox = 1;
	}

	else if (nelsedir == 1 && nsaj == 2)
	{
		nelsedir = 0;
		nsaj = 1;
	}
	else if (nres == 1)
	{
		nres = 0;
		sbus = 0;
		strain = 0;
		date[0]='\0';
		gw[0]='\0';
	}
	if (nsound == 1)
	{
		if (nhome == 1 || nselect == 1)
			PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (ndhaka == 1 || nlalbag == 1 || nahsan == 1 || nparl == 1)
			PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (nraj == 1 || nmaha == 1 || npahar == 1 || nutt == 1)
			PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
		else if (nch == 1 || ncox == 1 || nsaj == 1)
			PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
	}
}

void dirfClick()
{
	if (nlalbag == 1)
	{
		ndhakadir = 1;
		nlalbag = 2;
	}
	if (nahsan == 1)
	{
		ndhakadir = 1;
		nahsan = 2;
	}
	if (nparl == 1)
	{
		ndhakadir = 1;
		nparl = 2;
	}
	if (npahar == 1)
	{
		nelsedir = 1;
		npahar = 2;
	}
	if (nmaha == 1)
	{
		nelsedir = 1;
		nmaha = 2;
	}
	if (nutt == 1)
	{
		nelsedir = 1;
		nutt = 2;
	}
	if (ncox == 1)
	{
		nelsedir = 1;
		ncox = 2;
	}
	if (nsaj == 1)
	{
		nelsedir = 1;
		nsaj = 2;
	}
}

void dirf()
{
	if (ndhakadir == 1)
		iShowBMP(0, 0, dir[1]);
	if (nelsedir == 1)
		iShowBMP(0, 0, dir[0]);

	if (ncar == 1 && nlalbag == 2)
		iShowBMP(0, 0, dir[2]);
	if (nbus == 1 && nlalbag == 2)
		iShowBMP(0, 0, dir[3]);

	if (ncar == 1 && nahsan == 2)
		iShowBMP(0, 0, dir[4]);
	if (nbus == 1 && nahsan == 2)
		iShowBMP(0, 0, dir[5]);

	if (ncar == 1 && nparl == 2)
		iShowBMP(0, 0, dir[6]);
	if (nbus == 1 && nparl == 2)
		iShowBMP(0, 0, dir[7]);

	if (nroad == 1 && npahar == 2)
		iShowBMP(0, 0, dir[11]);
	if (nrail == 1 && npahar == 2)
		iShowBMP(0, 0, dir[8]);

	if (nroad == 1 && nmaha == 2)
		iShowBMP(0, 0, dir[12]);
	if (nrail == 1 && nmaha == 2)
		iShowBMP(0, 0, dir[9]);

	if (nroad == 1 && nutt == 2)
		iShowBMP(0, 0, dir[13]);
	if (nrail == 1 && nutt == 2)
		iShowBMP(0, 0, dir[10]);

	if (nroad == 1 && ncox == 2)
		iShowBMP(0, 0, dir[13]);
	if (nrail == 1 && ncox == 2)
		iShowBMP(0, 0, dir[10]);

	if (nroad == 1 && nsaj == 2)
		iShowBMP(0, 0, dir[13]);
	if (nrail == 1 && nsaj == 2)
		iShowBMP(0, 0, dir[10]);
}

int main()
{
	// place your own initialization codes here.
	if (nsound == 1)
	{
		if (ndhakavid == 1)
			PlaySound("LI\\sound\\dhsnd.wav", NULL, SND_LOOP | SND_ASYNC);
		if (nvid == 1)
			PlaySound("LI\\sound\\vidsound.wav", NULL, SND_LOOP | SND_ASYNC);
		if (nlogin == 1)
			PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
		if (nhome == 1 || nselect == 1)
			PlaySound("x.wav", NULL, SND_LOOP | SND_ASYNC);
		if (ndhaka == 1 || nlalbag == 1 || nahsan == 1 || nparl == 1)
			PlaySound("LI\\sound\\dhaka.wav", NULL, SND_LOOP | SND_ASYNC);
		if (nraj == 1 || nmaha == 1 || npahar == 1 || nutt == 1)
			PlaySound("LI\\sound\\raj.wav", NULL, SND_LOOP | SND_ASYNC);
	}

	// iSetTimer(150, temp);
	iSetTimer(1, planetemp);
	iSetTimer(70, traintemp);
	iSetTimer(70, ppltemp);
	iSetTimer(30, videoTemp);
	iSetTimer(33, videoTemp2);
	iSetTimer(33, trvideotemp);

	iInitialize(1000, 600, "Ovijatri v1.13");
	return 0;
}
