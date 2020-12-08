
static float listLinesArrow[8][3] = {
    {0.000f, 0.150f, -0.500f},  {0.000f, 0.150f, 0.150f},
    {0.000f, 0.300f, 0.150f},   {0.000f, 0.000f, 0.500f},
    {0.000f, -0.300f, 0.150f},  {0.000f, -0.150f, 0.150f},
    {0.000f, -0.150f, -0.500f}, {0.000f, 0.150f, -0.500f}};
static int arrowCount = 8;
static int arrowDegree = 1;
static bool arrowisOpen = true;

static float listLinesCircle[12][3] = {
    {0.352f, 0.000f, -0.352f},  {0.445f, 0.000f, -0.260f},
    {0.554f, 0.000f, 0.000f},   {0.390f, 0.000f, 0.390f},
    {0.000f, 0.000f, 0.554f},   {-0.390f, 0.000f, 0.390f},
    {-0.554f, 0.000f, 0.000f},  {-0.390f, 0.000f, -0.390f},
    {-0.090f, 0.000f, -0.520f}, {0.170f, 0.000f, -0.480f},
    {0.287f, 0.000f, -0.415f},  {0.352f, 0.000f, -0.352f}};
static int circleCount = 12;
static int circleDegree = 3;
static bool circleisOpen = true;

static float listLinesCompass[28][3] = {
    {0.128f, 0.000f, 0.478f},   {0.169f, 0.000f, 0.466f},
    {0.250f, 0.000f, 0.433f},   {0.354f, 0.000f, 0.354f},
    {0.433f, 0.000f, 0.250f},   {0.483f, 0.000f, 0.129f},
    {0.500f, 0.000f, 0.000f},   {0.483f, 0.000f, -0.129f},
    {0.433f, 0.000f, -0.250f},  {0.354f, 0.000f, -0.354f},
    {0.250f, 0.000f, -0.433f},  {0.129f, 0.000f, -0.483f},
    {0.000f, 0.000f, -0.700f},  {0.000f, 0.000f, -0.700f},
    {-0.129f, 0.000f, -0.483f}, {-0.250f, 0.000f, -0.433f},
    {-0.354f, 0.000f, -0.354f}, {-0.433f, 0.000f, -0.250f},
    {-0.483f, 0.000f, -0.129f}, {-0.500f, 0.000f, 0.000f},
    {-0.483f, 0.000f, 0.129f},  {-0.433f, 0.000f, 0.250f},
    {-0.354f, 0.000f, 0.354f},  {-0.250f, 0.000f, 0.433f},
    {-0.129f, 0.000f, 0.483f},  {-0.013f, 0.000f, 0.498f},
    {0.068f, 0.000f, 0.492f},   {0.128f, 0.000f, 0.477f}};
static int compassCount = 28;
static int compassDegree = 3;
static bool compassisOpen = true;

static float listLinesCross[13][3] = {
    {0.000f, 0.175f, 0.000f},   {0.350f, 0.525f, 0.000f},
    {0.525f, 0.350f, 0.000f},   {0.175f, 0.000f, 0.000f},
    {0.525f, -0.350f, 0.000f},  {0.350f, -0.525f, 0.000f},
    {0.000f, -0.175f, 0.000f},  {-0.350f, -0.525f, 0.000f},
    {-0.525f, -0.350f, 0.000f}, {-0.175f, 0.000f, 0.000f},
    {-0.525f, 0.350f, 0.000f},  {-0.350f, 0.525f, 0.000f},
    {0.000f, 0.175f, 0.000f}};
static int crossCount = 13;
static int crossDegree = 1;
static bool crossisOpen = true;

static float listLinesCrossarrow[25][3] = {
    {0.300f, 0.000f, 0.100f},   {0.100f, 0.000f, 0.100f},
    {0.100f, 0.000f, 0.300f},   {0.200f, 0.000f, 0.300f},
    {0.000f, 0.000f, 0.500f},   {-0.200f, 0.000f, 0.300f},
    {-0.100f, 0.000f, 0.300f},  {-0.100f, 0.000f, 0.100f},
    {-0.300f, 0.000f, 0.100f},  {-0.300f, 0.000f, 0.200f},
    {-0.500f, 0.000f, 0.000f},  {-0.300f, 0.000f, -0.200f},
    {-0.300f, 0.000f, -0.100f}, {-0.100f, 0.000f, -0.100f},
    {-0.100f, 0.000f, -0.300f}, {-0.200f, 0.000f, -0.300f},
    {0.000f, 0.000f, -0.500f},  {0.200f, 0.000f, -0.300f},
    {0.100f, 0.000f, -0.300f},  {0.100f, 0.000f, -0.100f},
    {0.300f, 0.000f, -0.100f},  {0.300f, 0.000f, -0.200f},
    {0.500f, 0.000f, 0.000f},   {0.300f, 0.000f, 0.200f},
    {0.300f, 0.000f, 0.100f}};
static int crossArrowCount = 25;
static int crossArrowDegree = 1;
static bool crossArrowisOpen = true;

static float listLinesFlower[14][3] = {
    {-0.100f, 0.100f, 0.000f},  {0.067f, 0.267f, 0.000f},
    {1.000f, 0.000f, 0.000f},   {-0.400f, -0.400f, 0.000f},
    {0.000f, 1.000f, 0.000f},   {0.400f, -0.400f, 0.000f},
    {-1.000f, 0.000f, 0.000f},  {0.400f, 0.400f, 0.000f},
    {0.058f, -0.796f, 0.000f},  {-0.153f, -0.379f, 0.000f},
    {-0.176f, -0.198f, 0.000f}, {-0.185f, -0.052f, 0.000f},
    {-0.140f, 0.051f, 0.000f},  {-0.100f, 0.100f, 0.000f}};
static int flowerCount = 14;
static int flowerDegree = 3;
static bool flowerisOpen = true;

static float listLinesSpine[16][3] = {
    {-3.887f, 1.204f, -7.654f}, {-4.797f, 3.326f, -7.040f},
    {-5.460f, 7.718f, -5.395f}, {-7.197f, 10.921f, 0.000f},
    {-5.460f, 7.718f, 5.395f},  {-5.634f, 0.008f, 7.863f},
    {0.000f, -5.014f, 9.080f},  {5.634f, 0.008f, 7.863f},
    {5.460f, 7.718f, 5.395f},   {7.197f, 10.921f, 0.000f},
    {5.460f, 7.718f, -5.395f},  {4.466f, 1.130f, -7.863f},
    {0.705f, -4.044f, -8.888f}, {-1.987f, -2.212f, -8.525f},
    {-3.402f, 0.175f, -7.949f}, {-3.887f, 1.204f, -7.655f}};
static int spineCount = 16;
static int spineDegree = 3;
static bool spineisOpen = true;

static float listLinesSquare[5][3] = {{0.500f, 0.000f, 0.500f},
                                      {0.500f, 0.000f, -0.500f},
                                      {-0.500f, 0.000f, -0.500f},
                                      {-0.500f, 0.000f, 0.500f},
                                      {0.500f, 0.000f, 0.500f}};
static int squareCount = 5;
static int squareDegree = 1;
static bool squareisOpen = true;

static float listLinesGear[33][3] = {
    {0.362f, 0.110f, 0.000f},   {0.501f, 0.049f, 0.000f},
    {0.501f, -0.049f, 0.000f},  {0.362f, -0.110f, 0.000f},
    {0.333f, -0.178f, 0.000f},  {0.389f, -0.319f, 0.000f},
    {0.319f, -0.389f, 0.000f},  {0.178f, -0.333f, 0.000f},
    {0.110f, -0.362f, 0.000f},  {0.049f, -0.501f, 0.000f},
    {-0.049f, -0.501f, 0.000f}, {-0.110f, -0.362f, 0.000f},
    {-0.178f, -0.333f, 0.000f}, {-0.319f, -0.389f, 0.000f},
    {-0.389f, -0.319f, 0.000f}, {-0.333f, -0.178f, 0.000f},
    {-0.362f, -0.110f, 0.000f}, {-0.501f, -0.049f, 0.000f},
    {-0.501f, 0.049f, 0.000f},  {-0.362f, 0.110f, 0.000f},
    {-0.333f, 0.178f, 0.000f},  {-0.389f, 0.319f, 0.000f},
    {-0.319f, 0.389f, 0.000f},  {-0.178f, 0.333f, 0.000f},
    {-0.110f, 0.362f, 0.000f},  {-0.049f, 0.501f, 0.000f},
    {0.049f, 0.501f, 0.000f},   {0.110f, 0.362f, 0.000f},
    {0.178f, 0.333f, 0.000f},   {0.319f, 0.389f, 0.000f},
    {0.389f, 0.319f, 0.000f},   {0.333f, 0.178f, 0.000f},
    {0.362f, 0.110f, 0.000f}};
static int gearCount = 33;
static int gearDegree = 1;
static bool gearisOpen = true;

static float listLinesLung[141][3] = {
    {0.022f, 0.458f, 0.002f},   {0.028f, 0.457f, 0.002f},
    {0.035f, 0.455f, 0.002f},   {0.036f, 0.446f, 0.002f},
    {0.036f, 0.086f, 0.002f},   {0.036f, 0.073f, 0.002f},
    {0.043f, 0.067f, 0.002f},   {0.140f, -0.006f, 0.002f},
    {0.148f, -0.012f, 0.002f},  {0.158f, -0.010f, 0.002f},
    {0.225f, 0.010f, 0.002f},   {0.234f, 0.013f, 0.002f},
    {0.241f, 0.007f, 0.002f},   {0.268f, -0.050f, 0.002f},
    {0.268f, -0.060f, 0.002f},  {0.261f, -0.063f, 0.002f},
    {0.231f, -0.072f, 0.002f},  {0.221f, -0.075f, 0.002f},
    {0.224f, -0.078f, 0.002f},  {0.276f, -0.133f, 0.002f},
    {0.280f, -0.140f, 0.002f},  {0.279f, -0.146f, 0.002f},
    {0.234f, -0.190f, 0.002f},  {0.225f, -0.195f, 0.002f},
    {0.218f, -0.188f, 0.002f},  {0.124f, -0.091f, 0.002f},
    {0.118f, -0.090f, 0.002f},  {0.115f, -0.099f, 0.002f},
    {0.115f, -0.175f, 0.002f},  {0.137f, -0.219f, 0.002f},
    {0.177f, -0.256f, 0.002f},  {0.238f, -0.278f, 0.002f},
    {0.315f, -0.277f, 0.002f},  {0.358f, -0.255f, 0.002f},
    {0.361f, -0.204f, 0.002f},  {0.347f, -0.106f, 0.002f},
    {0.307f, 0.012f, 0.002f},   {0.254f, 0.121f, 0.002f},
    {0.208f, 0.175f, 0.002f},   {0.178f, 0.190f, 0.002f},
    {0.153f, 0.169f, 0.002f},   {0.134f, 0.125f, 0.002f},
    {0.125f, 0.073f, 0.002f},   {0.124f, 0.060f, 0.002f},
    {0.115f, 0.060f, 0.002f},   {0.065f, 0.090f, 0.002f},
    {0.061f, 0.095f, 0.002f},   {0.060f, 0.101f, 0.002f},
    {0.072f, 0.194f, 0.002f},   {0.117f, 0.251f, 0.002f},
    {0.172f, 0.273f, 0.002f},   {0.244f, 0.245f, 0.002f},
    {0.322f, 0.155f, 0.002f},   {0.385f, 0.036f, 0.002f},
    {0.424f, -0.092f, 0.002f},  {0.444f, -0.198f, 0.002f},
    {0.439f, -0.266f, 0.002f},  {0.413f, -0.313f, 0.002f},
    {0.343f, -0.355f, 0.002f},  {0.231f, -0.359f, 0.002f},
    {0.157f, -0.340f, 0.002f},  {0.095f, -0.300f, 0.002f},
    {0.046f, -0.236f, 0.002f},  {0.037f, -0.158f, 0.002f},
    {0.035f, -0.052f, 0.002f},  {0.036f, -0.024f, 0.002f},
    {0.035f, -0.015f, 0.002f},  {0.027f, -0.009f, 0.002f},
    {0.007f, 0.003f, 0.002f},   {-0.002f, 0.007f, 0.002f},
    {-0.009f, 0.003f, 0.002f},  {-0.027f, -0.009f, 0.002f},
    {-0.035f, -0.015f, 0.002f}, {-0.036f, -0.024f, 0.002f},
    {-0.035f, -0.052f, 0.002f}, {-0.035f, -0.160f, 0.002f},
    {-0.045f, -0.236f, 0.002f}, {-0.094f, -0.301f, 0.002f},
    {-0.157f, -0.341f, 0.002f}, {-0.233f, -0.361f, 0.002f},
    {-0.344f, -0.355f, 0.002f}, {-0.413f, -0.314f, 0.002f},
    {-0.440f, -0.265f, 0.002f}, {-0.445f, -0.198f, 0.002f},
    {-0.425f, -0.091f, 0.002f}, {-0.386f, 0.036f, 0.002f},
    {-0.322f, 0.157f, 0.002f},  {-0.243f, 0.246f, 0.002f},
    {-0.171f, 0.274f, 0.002f},  {-0.116f, 0.252f, 0.002f},
    {-0.072f, 0.192f, 0.002f},  {-0.060f, 0.100f, 0.002f},
    {-0.061f, 0.094f, 0.002f},  {-0.065f, 0.090f, 0.002f},
    {-0.115f, 0.059f, 0.002f},  {-0.123f, 0.060f, 0.002f},
    {-0.125f, 0.073f, 0.002f},  {-0.133f, 0.126f, 0.002f},
    {-0.153f, 0.170f, 0.002f},  {-0.178f, 0.190f, 0.002f},
    {-0.209f, 0.176f, 0.002f},  {-0.255f, 0.121f, 0.002f},
    {-0.308f, 0.011f, 0.002f},  {-0.347f, -0.107f, 0.002f},
    {-0.362f, -0.205f, 0.002f}, {-0.358f, -0.256f, 0.002f},
    {-0.314f, -0.278f, 0.002f}, {-0.237f, -0.278f, 0.002f},
    {-0.177f, -0.256f, 0.002f}, {-0.136f, -0.219f, 0.002f},
    {-0.115f, -0.173f, 0.002f}, {-0.115f, -0.100f, 0.002f},
    {-0.116f, -0.088f, 0.002f}, {-0.124f, -0.092f, 0.002f},
    {-0.218f, -0.188f, 0.002f}, {-0.225f, -0.195f, 0.002f},
    {-0.235f, -0.190f, 0.002f}, {-0.279f, -0.146f, 0.002f},
    {-0.281f, -0.141f, 0.002f}, {-0.275f, -0.132f, 0.002f},
    {-0.224f, -0.079f, 0.002f}, {-0.221f, -0.076f, 0.002f},
    {-0.230f, -0.072f, 0.002f}, {-0.260f, -0.063f, 0.002f},
    {-0.268f, -0.061f, 0.002f}, {-0.267f, -0.050f, 0.002f},
    {-0.240f, 0.007f, 0.002f},  {-0.234f, 0.012f, 0.002f},
    {-0.226f, 0.010f, 0.002f},  {-0.157f, -0.011f, 0.002f},
    {-0.148f, -0.013f, 0.002f}, {-0.140f, -0.006f, 0.002f},
    {-0.043f, 0.067f, 0.002f},  {-0.037f, 0.073f, 0.002f},
    {-0.036f, 0.086f, 0.002f},  {-0.036f, 0.452f, 0.002f},
    {-0.034f, 0.455f, 0.002f},  {-0.026f, 0.458f, 0.002f},
    {-0.003f, 0.458f, 0.002f},  {0.011f, 0.458f, 0.002f},
    {0.022f, 0.458f, 0.002f}};
static int lungCount = 141;
static int lungDegree = 3;
static bool lungisOpen = true;

static float listLinesBone[10][3] = {
    {0.000f, 0.500f, 0.500f},   {1.000f, 0.000f, 0.000f},
    {0.000f, 0.500f, -0.500f},  {0.000f, 0.500f, 0.500f},
    {0.000f, -0.500f, 0.500f},  {1.000f, 0.000f, 0.000f},
    {0.000f, -0.500f, -0.500f}, {0.000f, -0.500f, 0.500f},
    {0.000f, -0.500f, -0.500f}, {0.000f, 0.500f, -0.500f}};
static int boneCount = 10;
static int boneDegree = 1;
static bool boneisOpen = true;

static float listLinesCube[16][3] = {
    {0.500f, 0.500f, 0.500f},   {0.500f, 0.500f, -0.500f},
    {-0.500f, 0.500f, -0.500f}, {-0.500f, -0.500f, -0.500f},
    {-0.500f, -0.500f, 0.500f}, {-0.500f, 0.500f, 0.500f},
    {-0.500f, 0.500f, -0.500f}, {-0.500f, 0.500f, 0.500f},
    {0.500f, 0.500f, 0.500f},   {0.500f, -0.500f, 0.500f},
    {-0.500f, -0.500f, 0.500f}, {0.500f, -0.500f, 0.500f},
    {0.500f, -0.500f, -0.500f}, {0.500f, 0.500f, -0.500f},
    {0.500f, -0.500f, -0.500f}, {-0.500f, -0.500f, -0.500f}};
static int cubeCount = 16;
static int cubeDegree = 1;
static bool cubeisOpen = true;

static float listLinesCubewithpeak[23][3] = {
    {0.000f, 1.000f, 0.000f},   {0.500f, 0.500f, 0.500f},
    {0.500f, 0.500f, -0.500f},  {0.000f, 1.000f, 0.000f},
    {-0.500f, 0.500f, -0.500f}, {0.500f, 0.500f, -0.500f},
    {-0.500f, 0.500f, -0.500f}, {0.000f, 1.000f, 0.000f},
    {-0.500f, 0.500f, 0.500f},  {-0.500f, 0.500f, -0.500f},
    {-0.500f, 0.000f, -0.500f}, {-0.500f, 0.000f, 0.500f},
    {-0.500f, 0.500f, 0.500f},  {-0.500f, 0.500f, -0.500f},
    {-0.500f, 0.500f, 0.500f},  {0.500f, 0.500f, 0.500f},
    {0.500f, 0.000f, 0.500f},   {-0.500f, 0.000f, 0.500f},
    {0.500f, 0.000f, 0.500f},   {0.500f, 0.000f, -0.500f},
    {0.500f, 0.500f, -0.500f},  {0.500f, 0.000f, -0.500f},
    {-0.500f, 0.000f, -0.500f}};
static int cubeWithPeakCount = 23;
static int cubeWithPeakDegree = 1;
static bool cubeWithPeakisOpen = true;

static float listLinesCylinder[45][3] = {
    {0.000f, 0.500f, 0.000f},    {0.500f, 0.500f, 0.000f},
    {0.500f, -0.500f, 0.000f},   {0.000f, -0.500f, 0.000f},
    {-0.500f, -0.500f, 0.000f},  {-0.462f, -0.500f, 0.191f},
    {-0.354f, -0.500f, 0.354f},  {-0.191f, -0.500f, 0.462f},
    {0.000f, -0.500f, 0.500f},   {0.191f, -0.500f, 0.462f},
    {0.354f, -0.500f, 0.354f},   {0.462f, -0.500f, 0.191f},
    {0.500f, -0.500f, 0.000f},   {0.462f, -0.500f, -0.191f},
    {0.354f, -0.500f, -0.354f},  {0.191f, -0.500f, -0.462f},
    {0.000f, -0.500f, -0.500f},  {0.000f, 0.500f, -0.500f},
    {0.000f, 0.500f, 0.000f},    {0.000f, 0.500f, 0.500f},
    {0.000f, -0.500f, 0.500f},   {0.000f, -0.500f, 0.000f},
    {0.000f, -0.500f, -0.500f},  {-0.191f, -0.500f, -0.462f},
    {-0.354f, -0.500f, -0.354f}, {-0.462f, -0.500f, -0.191f},
    {-0.500f, -0.500f, 0.000f},  {-0.500f, 0.500f, 0.000f},
    {-0.462f, 0.500f, 0.191f},   {-0.354f, 0.500f, 0.354f},
    {-0.191f, 0.500f, 0.462f},   {0.000f, 0.500f, 0.500f},
    {0.191f, 0.500f, 0.462f},    {0.354f, 0.500f, 0.354f},
    {0.462f, 0.500f, 0.191f},    {0.500f, 0.500f, 0.000f},
    {0.462f, 0.500f, -0.191f},   {0.354f, 0.500f, -0.354f},
    {0.191f, 0.500f, -0.462f},   {0.000f, 0.500f, -0.500f},
    {-0.191f, 0.500f, -0.462f},  {-0.354f, 0.500f, -0.354f},
    {-0.462f, 0.500f, -0.191f},  {-0.500f, 0.500f, 0.000f},
    {0.000f, 0.500f, 0.000f}};
static int cylinderCount = 45;
static int cylinderDegree = 1;
static bool cylinderisOpen = true;

static float listLinesDiamond[16][3] = {
    {0.500f, 0.000f, 0.500f},   {0.000f, 0.500f, 0.000f},
    {0.500f, 0.000f, -0.500f},  {0.500f, 0.000f, 0.500f},
    {-0.500f, 0.000f, 0.500f},  {0.000f, 0.500f, 0.000f},
    {-0.500f, 0.000f, -0.500f}, {-0.500f, 0.000f, 0.500f},
    {-0.500f, 0.000f, -0.500f}, {0.500f, 0.000f, -0.500f},
    {0.000f, -0.500f, 0.000f},  {-0.500f, 0.000f, -0.500f},
    {0.000f, -0.500f, 0.000f},  {-0.500f, 0.000f, 0.500f},
    {0.000f, -0.500f, 0.000f},  {0.500f, 0.000f, 0.500f}};
static int diamondCount = 16;
static int diamondDegree = 1;
static bool diamondisOpen = true;

static float listLinesJaw[43][3] = {
    {2.928f, -0.001f, 0.456f},   {2.928f, -0.176f, 0.421f},
    {2.928f, -0.325f, 0.322f},   {2.928f, -0.424f, 0.173f},
    {2.928f, -0.458f, -0.003f},  {2.928f, -0.423f, -0.178f},
    {2.928f, -0.323f, -0.326f},  {2.928f, -0.174f, -0.425f},
    {2.928f, 0.001f, -0.459f},   {2.928f, 0.176f, -0.424f},
    {2.928f, 0.325f, -0.324f},   {2.928f, 0.424f, -0.175f},
    {2.928f, 0.458f, 0.000f},    {2.928f, 0.423f, 0.175f},
    {2.928f, 0.323f, 0.323f},    {2.928f, 0.174f, 0.422f},
    {2.928f, -0.001f, 0.456f},   {2.928f, -0.001f, 0.457f},
    {2.928f, -0.001f, 0.456f},   {2.624f, 0.000f, 2.009f},
    {1.601f, 0.000f, 3.755f},    {0.000f, 0.000f, 4.599f},
    {-1.602f, 0.000f, 3.755f},   {-2.625f, 0.000f, 2.009f},
    {-2.919f, -0.001f, 0.457f},  {-2.919f, -0.001f, 0.457f},
    {-2.919f, -0.001f, 0.457f},  {-2.919f, 0.174f, 0.422f},
    {-2.919f, 0.323f, 0.323f},   {-2.919f, 0.423f, 0.175f},
    {-2.919f, 0.458f, 0.000f},   {-2.919f, 0.424f, -0.175f},
    {-2.919f, 0.325f, -0.324f},  {-2.919f, 0.176f, -0.424f},
    {-2.919f, 0.001f, -0.459f},  {-2.919f, -0.174f, -0.425f},
    {-2.919f, -0.323f, -0.326f}, {-2.919f, -0.423f, -0.178f},
    {-2.919f, -0.458f, -0.003f}, {-2.919f, -0.424f, 0.173f},
    {-2.919f, -0.325f, 0.322f},  {-2.919f, -0.176f, 0.421f},
    {-2.919f, -0.001f, 0.457f}};
static int jawCount = 43;
static int jawDegree = 3;
static bool jawisOpen = true;

static float listLinesNull[8][3] = {
    {0.000f, 0.000f, -1.000f}, {0.000f, 0.000f, 1.000f},
    {0.000f, 0.000f, 0.000f},  {1.000f, 0.000f, 0.000f},
    {-1.000f, 0.000f, 0.000f}, {0.000f, 0.000f, 0.000f},
    {0.000f, 1.000f, 0.000f},  {0.000f, -1.000f, 0.000f}};
static int nullCount = 8;
static int nullDegree = 1;
static bool nullisOpen = true;

static float listLinesPyramid[10][3] = {
    {0.500f, 0.000f, 0.500f},   {0.000f, 1.000f, 0.000f},
    {0.500f, 0.000f, -0.500f},  {0.500f, 0.000f, 0.500f},
    {-0.500f, 0.000f, 0.500f},  {0.000f, 1.000f, 0.000f},
    {-0.500f, 0.000f, -0.500f}, {-0.500f, 0.000f, 0.500f},
    {-0.500f, 0.000f, -0.500f}, {0.500f, 0.000f, -0.500f}};
static int pyramidCount = 10;
static int pyramidDegree = 1;
static bool pyramidisOpen = true;

static float listLinesSphere[49][3] = {
    {0.000f, 0.500f, 0.000f},   {0.191f, 0.462f, 0.000f},
    {0.354f, 0.354f, 0.000f},   {0.462f, 0.191f, 0.000f},
    {0.500f, 0.000f, 0.000f},   {0.462f, -0.191f, 0.000f},
    {0.354f, -0.354f, 0.000f},  {0.191f, -0.462f, 0.000f},
    {0.000f, -0.500f, 0.000f},  {-0.191f, -0.462f, 0.000f},
    {-0.354f, -0.354f, 0.000f}, {-0.462f, -0.191f, 0.000f},
    {-0.500f, 0.000f, 0.000f},  {-0.462f, 0.000f, 0.191f},
    {-0.354f, 0.000f, 0.354f},  {-0.191f, 0.000f, 0.462f},
    {0.000f, 0.000f, 0.500f},   {0.191f, 0.000f, 0.462f},
    {0.354f, 0.000f, 0.354f},   {0.462f, 0.000f, 0.191f},
    {0.500f, 0.000f, 0.000f},   {0.462f, 0.000f, -0.191f},
    {0.354f, 0.000f, -0.354f},  {0.191f, 0.000f, -0.462f},
    {0.000f, 0.000f, -0.500f},  {0.000f, -0.191f, -0.462f},
    {0.000f, -0.354f, -0.354f}, {0.000f, -0.462f, -0.191f},
    {0.000f, -0.500f, 0.000f},  {0.000f, -0.462f, 0.191f},
    {0.000f, -0.354f, 0.354f},  {0.000f, -0.191f, 0.462f},
    {0.000f, 0.000f, 0.500f},   {0.000f, 0.191f, 0.462f},
    {0.000f, 0.354f, 0.354f},   {0.000f, 0.462f, 0.191f},
    {0.000f, 0.500f, 0.000f},   {0.000f, 0.462f, -0.191f},
    {0.000f, 0.354f, -0.354f},  {0.000f, 0.191f, -0.462f},
    {0.000f, 0.000f, -0.500f},  {-0.191f, 0.000f, -0.462f},
    {-0.354f, 0.000f, -0.354f}, {-0.462f, 0.000f, -0.191f},
    {-0.500f, 0.000f, 0.000f},  {-0.462f, 0.191f, 0.000f},
    {-0.354f, 0.354f, 0.000f},  {-0.191f, 0.462f, 0.000f},
    {0.000f, 0.500f, 0.000f}};
static int sphereCount = 49;
static int sphereDegree = 1;
static bool sphereisOpen = true;

static float listLinesLookat[13][3] = {
    {0.000f, -0.075f, 0.000f}, {0.000f, 0.188f, 0.000f},
    {0.000f, 0.188f, -0.062f}, {0.000f, 0.250f, 0.000f},
    {0.000f, 0.188f, 0.062f},  {0.000f, 0.188f, 0.000f},
    {0.000f, 0.075f, 0.000f},  {0.000f, 0.075f, 0.325f},
    {0.000f, 0.150f, 0.325f},  {0.000f, 0.000f, 0.500f},
    {0.000f, -0.150f, 0.325f}, {0.000f, -0.075f, 0.325f},
    {0.000f, -0.075f, 0.000f}};
static int lookAtCount = 13;
static int lookAtDegree = 1;
static bool lookAtisOpen = true;

static float listLinesBendedarrow[33][3] = {
    {0.499f, 0.000f, 0.000f},   {0.434f, 0.150f, -0.093f},
    {0.434f, 0.150f, -0.047f},  {0.377f, 0.252f, -0.050f},
    {0.320f, 0.320f, -0.050f},  {0.252f, 0.377f, -0.050f},
    {0.173f, 0.418f, -0.050f},  {0.088f, 0.444f, -0.050f},
    {0.000f, 0.453f, -0.050f},  {-0.088f, 0.444f, -0.050f},
    {-0.173f, 0.418f, -0.050f}, {-0.252f, 0.377f, -0.050f},
    {-0.320f, 0.320f, -0.050f}, {-0.377f, 0.252f, -0.050f},
    {-0.434f, 0.150f, -0.047f}, {-0.434f, 0.150f, -0.093f},
    {-0.499f, 0.000f, 0.000f},  {-0.434f, 0.150f, 0.093f},
    {-0.434f, 0.150f, 0.047f},  {-0.377f, 0.252f, 0.050f},
    {-0.320f, 0.320f, 0.050f},  {-0.252f, 0.377f, 0.050f},
    {-0.173f, 0.418f, 0.050f},  {-0.088f, 0.444f, 0.050f},
    {0.000f, 0.453f, 0.050f},   {0.088f, 0.444f, 0.050f},
    {0.173f, 0.418f, 0.050f},   {0.252f, 0.377f, 0.050f},
    {0.320f, 0.320f, 0.050f},   {0.377f, 0.252f, 0.050f},
    {0.434f, 0.150f, 0.047f},   {0.434f, 0.150f, 0.093f},
    {0.499f, 0.000f, 0.000f}};
static int bendedArrowCount = 33;
static int bendedArrowDegree = 1;
static bool bendedArrowisOpen = true;

static float listLinesRotatearrow[21][3] = {
    {0.433f, 0.152f, 0.000f},  {0.350f, 0.120f, 0.000f},
    {0.500f, 0.000f, 0.000f},  {0.530f, 0.190f, 0.000f},
    {0.433f, 0.152f, 0.000f},  {0.377f, 0.252f, 0.000f},
    {0.320f, 0.320f, 0.000f},  {0.252f, 0.377f, 0.000f},
    {0.173f, 0.418f, 0.000f},  {0.088f, 0.444f, 0.000f},
    {0.000f, 0.453f, 0.000f},  {-0.088f, 0.444f, 0.000f},
    {-0.173f, 0.418f, 0.000f}, {-0.252f, 0.377f, 0.000f},
    {-0.320f, 0.320f, 0.000f}, {-0.377f, 0.252f, 0.000f},
    {-0.433f, 0.152f, 0.000f}, {-0.530f, 0.190f, 0.000f},
    {-0.500f, 0.000f, 0.000f}, {-0.350f, 0.120f, 0.000f},
    {-0.433f, 0.152f, 0.000f}};
static int rotateArrowCount = 21;
static int rotateArrowDegree = 1;
static bool rotateArrowisOpen = true;

static float listLinesNulldeg3[41][3] = {
    {0.000f, -0.000f, 0.000f},   {0.000f, -0.215f, 0.000f},
    {0.000f, -0.528f, 0.000f},   {-0.000f, -0.528f, -0.000f},
    {-0.000f, -0.215f, -0.000f}, {0.000f, 0.000f, 0.000f},
    {0.000f, 0.186f, 0.000f},    {0.000f, 0.373f, 0.000f},
    {0.000f, 0.563f, 0.000f},    {0.000f, 0.373f, 0.000f},
    {0.000f, 0.186f, 0.000f},    {0.000f, 0.000f, 0.000f},
    {-0.000f, -0.000f, 0.000f},  {0.000f, 0.000f, 0.000f},
    {0.000f, 0.000f, 0.000f},    {0.187f, 0.000f, 0.000f},
    {0.373f, 0.000f, 0.000f},    {0.563f, 0.000f, 0.000f},
    {0.373f, 0.000f, 0.000f},    {0.186f, 0.000f, 0.000f},
    {0.000f, 0.000f, 0.000f},    {-0.186f, 0.000f, 0.000f},
    {-0.373f, 0.000f, 0.000f},   {-0.506f, 0.000f, 0.000f},
    {-0.506f, 0.000f, 0.000f},   {-0.373f, 0.000f, 0.000f},
    {-0.187f, 0.000f, 0.000f},   {-0.000f, 0.000f, 0.000f},
    {-0.000f, 0.000f, 0.000f},   {0.000f, 0.000f, -0.186f},
    {0.000f, 0.000f, -0.373f},   {0.000f, 0.000f, -0.500f},
    {0.000f, 0.000f, -0.500f},   {0.000f, 0.000f, -0.373f},
    {0.000f, 0.000f, -0.186f},   {0.000f, 0.000f, 0.000f},
    {0.000f, 0.000f, 0.186f},    {0.000f, 0.000f, 0.373f},
    {0.000f, 0.000f, 0.589f},    {0.000f, 0.000f, 0.373f},
    {-0.000f, 0.000f, 0.000f}};
static int nullDeg3Count = 41;
static int nullDeg3Degree = 3;
static bool nullDeg3isOpen = true;

static float listLinesNulldeg1[12][3] = {
    {0.000f, 0.000f, 0.000f},  {0.000f, -0.500f, 0.000f},
    {0.000f, 0.000f, 0.000f},  {0.000f, 0.500f, 0.000f},
    {0.000f, 0.000f, 0.000f},  {0.500f, 0.000f, 0.000f},
    {0.000f, 0.000f, 0.000f},  {-0.500f, 0.000f, 0.000f},
    {0.000f, 0.000f, 0.000f},  {0.000f, 0.000f, 0.500f},
    {0.000f, 0.000f, -0.500f}, {0.000f, 0.000f, -0.000f}};
static int nullDeg1Count = 12;
static int nullDeg1Degree = 1;
static bool nullDeg1isOpen = true;

static float listLinesLookatdeg1[14][3] = {
    {0.000f, 0.000f, 0.000f},  {0.000f, 0.188f, 0.000f},
    {0.000f, 0.188f, -0.062f}, {0.000f, 0.250f, 0.000f},
    {0.000f, 0.188f, 0.062f},  {0.000f, 0.188f, 0.000f},
    {0.000f, 0.075f, 0.000f},  {0.000f, 0.075f, 0.325f},
    {0.000f, 0.150f, 0.325f},  {0.000f, 0.000f, 0.500f},
    {0.000f, -0.150f, 0.325f}, {0.000f, -0.075f, 0.325f},
    {0.000f, -0.075f, 0.000f}, {0.000f, 0.000f, 0.000f}};
static int lookatdeg1Count = 14;
static int lookatdeg1Degree = 1;
static bool lookatdeg1isOpen = true;

static float listLinesLookatdeg3[38][3] = {
    {0.000f, 0.000f, 0.000f},  {0.000f, 0.188f, -0.000f},
    {0.000f, 0.188f, -0.000f}, {0.000f, 0.188f, -0.000f},
    {0.000f, 0.188f, -0.062f}, {0.000f, 0.188f, -0.062f},
    {0.000f, 0.188f, -0.062f}, {0.000f, 0.250f, -0.000f},
    {0.000f, 0.250f, -0.000f}, {0.000f, 0.250f, -0.000f},
    {0.000f, 0.188f, 0.062f},  {0.000f, 0.188f, 0.062f},
    {0.000f, 0.188f, 0.062f},  {0.000f, 0.188f, -0.000f},
    {0.000f, 0.188f, -0.000f}, {0.000f, 0.188f, -0.000f},
    {0.000f, 0.075f, -0.000f}, {0.000f, 0.075f, -0.000f},
    {0.000f, 0.075f, -0.000f}, {0.000f, 0.075f, 0.325f},
    {0.000f, 0.075f, 0.325f},  {0.000f, 0.075f, 0.325f},
    {0.000f, 0.150f, 0.325f},  {0.000f, 0.150f, 0.325f},
    {0.000f, 0.150f, 0.325f},  {0.000f, -0.000f, 0.500f},
    {0.000f, 0.000f, 0.500f},  {0.000f, -0.000f, 0.500f},
    {0.000f, -0.150f, 0.325f}, {0.000f, -0.150f, 0.325f},
    {0.000f, -0.150f, 0.325f}, {0.000f, -0.075f, 0.325f},
    {0.000f, -0.075f, 0.325f}, {0.000f, -0.075f, 0.325f},
    {0.000f, -0.075f, 0.000f}, {0.000f, -0.075f, -0.000f},
    {0.000f, -0.075f, 0.000f}, {0.000f, 0.000f, 0.000f}};
static int lookatdeg3Count = 38;
static int lookatdeg3Degree = 3;
static bool lookatdeg3isOpen = true;