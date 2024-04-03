
#ifndef ninja_H
#define ninja_H

const GLfloat ninja_vertices[] = {-0,0.180907,0.932804,0.028717,0.157496,0.992,0.033351,0.177304,0.932804,0.05633,0.147972,0.992,0.06542,0.166631,0.932804,0.081778,0.132507,0.992,0.094976,0.1493,0.932804,0.104084,0.111695,0.992,0.120881,0.125975,0.932804,0.12239,0.086334,0.992,0.142141,0.097555,0.932804,0.135993,0.057401,0.992,0.157939,0.06513,0.932804,0.144369,0.026007,0.992,0.167667,0.029947,0.932804,0.147197,-0.006642,0.992,0.170952,-0.006642,0.932804,0.167667,-0.043231,0.932804,0.144369,-0.039291,0.992,0.157939,-0.078414,0.932804,0.135993,-0.070685,0.992,0.142141,-0.110839,0.932804,0.12239,-0.099619,0.992,0.120881,-0.139259,0.932804,0.104084,-0.124979,0.992,0.094976,-0.162584,0.932804,0.081778,-0.145791,0.992,0.06542,-0.179915,0.932804,0.05633,-0.161256,0.992,0.033351,-0.190588,0.932804,0.028717,-0.17078,0.992,-0,-0.194191,0.932804,-0.028717,-0.17078,0.992,-0.033351,-0.190588,0.932804,-0.05633,-0.161256,0.992,-0.06542,-0.179915,0.932804,-0.081779,-0.145791,0.992,-0.094976,-0.162584,0.932804,-0.104084,-0.124979,0.992,-0.120881,-0.139259,0.932804,-0.12239,-0.099619,0.992,-0.142141,-0.110839,0.932804,-0.135993,-0.070685,0.992,-0.157939,-0.078414,0.932804,-0.144369,-0.039291,0.992,-0.167667,-0.043231,0.932804,-0.147197,-0.006642,0.992,-0.170952,-0.006642,0.932804,-0.167667,0.029947,0.932804,-0.144369,0.026007,0.992,-0.157939,0.06513,0.932804,-0.135993,0.057401,0.992,-0.142141,0.097555,0.932804,-0.12239,0.086334,0.992,-0.120881,0.125975,0.932804,-0.104084,0.111695,0.992,-0.094976,0.1493,0.932804,-0.081779,0.132507,0.992,-0.06542,0.166631,0.932804,-0.05633,0.147972,0.992,-0.033351,0.177304,0.932804,-0.028717,0.157496,0.992,-0,0.160711,0.992,-0,-0.173995,0.992,0.189196,0.042801,0.32783,0.159373,0.075108,0.239773,0.212498,0.10669,0.311074,-0,0.209461,0.105672,-0.065665,0.20789,0.119474,-0.020291,0.2713,0.12669,0.053124,0.247079,0.123934,0.22504,0.055192,0.414766,-0.233858,0.18237,0.343715,-0.217288,0.121659,0.312779,-0.250121,0.133571,0.423687,-0.072265,0.408199,0.369415,-0.12654,0.375302,0.341644,-0.113999,0.402184,0.454256,0.189196,0.321938,0.359598,0.139082,0.366049,0.340591,0.179666,0.353741,0.448743,0.179666,-0.00822,0.407549,-0.250121,0.21195,0.432607,-0.040583,0.426404,0.457013,0.22504,0.29033,0.441526,-0.189196,-0.001034,0.712999,-0.139082,-0.045145,0.732006,-0.159373,0.010659,0.806063,-0.189196,0.278103,0.744767,-0.212498,0.214214,0.761523,-0.159373,0.245797,0.832824,0.072265,0.364363,0.754584,0.00775,0.365257,0.778713,0.060874,0.31846,0.841094,0.233858,0.138535,0.728881,0.217288,0.199245,0.759818,0.196996,0.128228,0.819442,0.065665,0.113014,0.953123,0.020291,0.176424,0.96034,-0,0.111443,0.966925,0.137458,0.118763,0.902612,0.094597,0.186401,0.929405,0.166863,0.194773,0.855846,0.042476,0.2515,0.917719,0.116928,0.264558,0.863789,0.179935,0.267425,0.777801,0.12654,0.326067,0.774253,-0.053124,0.152203,0.957583,-0.036133,0.22953,0.934314,-0.013802,0.307687,0.868698,-0.111206,0.200798,0.911949,-0.094598,0.281031,0.865664,-0.06873,0.349461,0.787138,-0.139082,0.316815,0.7732,-0.053124,0.073825,0.948663,-0.116928,0.116617,0.921463,-0.175393,0.168118,0.852813,-0.111206,0.036727,0.893276,-0.175393,0.08186,0.842996,-0.222412,0.134686,0.762694,-0.212498,0.057456,0.743682,0.020291,0.049604,0.945907,-0.094598,-0.031054,0.830146,0.042476,-0.013975,0.887506,0.094597,0.046833,0.913521,0.116928,-0.014581,0.832021,0.166863,0.055204,0.839962,0.12654,-0.054397,0.730953,0.179935,0.001948,0.747588,0.217288,0.072425,0.745385,0.250121,0.187333,0.64891,0.248665,0.242488,0.545635,0.225329,0.25982,0.668172,0.211528,0.316495,0.554057,0.175394,0.329605,0.676115,0.153684,0.375228,0.560742,0.113999,0.377566,0.670561,0.040583,0.401787,0.673318,-0,0.42593,0.566512,-0.036134,0.399391,0.684057,-0.080796,0.412937,0.565033,-0.11693,0.372735,0.681024,-0.153684,0.375228,0.560742,-0.179666,0.329124,0.665048,-0.22504,0.265712,0.657831,-0.248665,0.242488,0.545635,-0.24766,0.190035,0.66023,-0.261462,0.160452,0.536299,-0.24766,0.103777,0.650414,-0.248665,0.078416,0.526962,-0.22504,0.030574,0.63107,-0.179666,-0.032837,0.623854,0.211528,0.004409,0.518538,0.153684,-0.054324,0.511855,0.175394,-0.035793,0.634529,0.225329,0.033992,0.642471,0.248665,0.078416,0.526962,0.250121,0.108954,0.63999,0.080796,0.412937,0.565033,0.11693,0.399827,0.442975,0.036134,0.426482,0.446009,0.06873,0.400993,0.334345,-0.00775,0.414491,0.346104,-0.211528,0.316496,0.554057,-0.175394,0.356698,0.438067,-0.225329,0.286912,0.430125,-0.179935,0.318956,0.325009,-0.217288,0.24848,0.327212,-0.211528,0.004408,0.518539,-0.225329,0.061084,0.404424,-0.153684,-0.054324,0.511855,-0.175394,-0.008702,0.396482,-0.113999,-0.056662,0.402035,-0.179935,0.053479,0.294796,-0.12654,-0.005163,0.298344,0.261462,0.160452,0.536298,0.24766,0.130869,0.412366,0.24766,0.217127,0.422183,0.222412,0.186218,0.309902,0.212498,0.263448,0.328915,0.159373,0.310245,0.266533,0.111206,0.284177,0.17932,0.094598,0.351958,0.242451,0.036133,0.317201,0.163984,0.013802,0.378614,0.245485,-0.042476,0.334879,0.185091,-0.060874,0.382908,0.274803,-0.116929,0.335484,0.240576,-0.094597,0.274071,0.159075,-0.166864,0.2657,0.232635,-0.137458,0.202141,0.169985,-0.196996,0.192676,0.253155,-0.166864,0.126131,0.216751,-0.094597,0.134502,0.143192,-0.116929,0.056346,0.208808,0.175393,0.239044,0.229601,0.175393,0.152786,0.219784,0.116929,0.204287,0.151134,0.111206,0.120106,0.160648,0.053124,0.168701,0.115013};
const GLfloat ninja_normals[] = {0,0.830904,-0.556416,0.133053,0.592239,0.794701,0.178408,0.812147,-0.555507,0.25572,0.547464,0.7968,0.346178,0.757725,-0.553185,0.360861,0.479222,0.800079,0.495293,0.672372,-0.550091,0.444772,0.394835,0.803917,0.620101,0.562644,-0.546723,0.507054,0.300896,0.807687,0.717683,0.435244,-0.543593,0.549214,0.202171,0.810858,0.787088,0.296056,-0.54115,0.573278,0.101508,0.813049,0.828399,0.149838,-0.539725,0.581059,-0,0.813862,0.842113,0,-0.539301,0.828399,-0.149837,-0.539725,0.573278,-0.101508,0.813049,0.787088,-0.296056,-0.54115,0.549214,-0.202172,0.810858,0.717683,-0.435244,-0.543594,0.507055,-0.300896,0.807686,0.620101,-0.562643,-0.546724,0.444773,-0.394835,0.803917,0.495293,-0.672372,-0.550092,0.360862,-0.479223,0.800078,0.346178,-0.757724,-0.553186,0.25572,-0.547465,0.796799,0.178407,-0.812146,-0.555508,0.133054,-0.59224,0.794701,-0,-0.830903,-0.556417,-0.133054,-0.59224,0.7947,-0.178407,-0.812146,-0.555508,-0.25572,-0.547465,0.796799,-0.346178,-0.757724,-0.553186,-0.360862,-0.479223,0.800078,-0.495293,-0.672372,-0.550092,-0.444773,-0.394835,0.803917,-0.620101,-0.562644,-0.546724,-0.507055,-0.300896,0.807686,-0.717683,-0.435244,-0.543594,-0.549214,-0.202172,0.810858,-0.787088,-0.296056,-0.54115,-0.573278,-0.101508,0.813049,-0.828399,-0.149837,-0.539726,-0.581059,-0,0.813862,-0.842113,0,-0.539301,-0.828399,0.149838,-0.539725,-0.573278,0.101508,0.813049,-0.787088,0.296056,-0.54115,-0.549214,0.202171,0.810858,-0.717683,0.435244,-0.543593,-0.507054,0.300896,0.807687,-0.620101,0.562644,-0.546724,-0.444773,0.394835,0.803917,-0.495293,0.672372,-0.550091,-0.360861,0.479222,0.800079,-0.346178,0.757725,-0.553185,-0.25572,0.547464,0.7968,-0.178407,0.812147,-0.555507,-0.133053,0.592239,0.794701,0,0.607892,0.79402,-0,-0.607894,0.794018,0.836661,-0.436672,-0.330629,0.791515,-0.327409,-0.516049,0.889881,-0.264761,-0.371501,0.043733,0.240125,-0.969756,-0.442311,0.203438,-0.873484,-0.122547,0.472039,-0.873018,0.320587,0.331147,-0.887449,0.884424,-0.421206,-0.200947,-0.956452,0.033006,-0.290016,-0.902541,-0.225497,-0.366839,-0.976735,-0.133672,-0.16769,-0.300642,0.934102,-0.192531,-0.542384,0.800862,-0.253849,-0.456077,0.888315,-0.053764,0.778799,0.583889,-0.22923,0.576505,0.775831,-0.256377,0.705788,0.70457,-0.073787,0.787075,-0.5867,-0.190516,-0.976735,0.167934,-0.133365,-0.157514,0.986572,-0.043194,0.884424,0.455588,-0.10116,-0.778799,-0.583888,0.22923,-0.667661,-0.688464,0.283276,-0.713496,-0.559308,0.422016,-0.778799,0.517447,0.354571,-0.889881,0.26476,0.371501,-0.713496,0.450175,0.536904,0.300642,0.866951,0.397506,0.021463,0.893395,0.448759,0.274888,0.768743,0.577469,0.956452,-0.033006,0.290016,0.902541,0.225497,0.366839,0.877293,-0.054272,0.476877,0.396076,-0.103831,0.912328,0.122547,0.263795,0.956762,-4e-06,-0.113079,0.993586,0.70451,-0.080251,0.705142,0.51283,0.275332,0.813141,0.77079,0.255437,0.583639,0.219494,0.577399,0.786405,0.551492,0.556702,0.621241,0.760289,0.497216,0.418015,0.542384,0.72334,0.427316,-0.320587,0.123264,0.939164,-0.19667,0.501762,0.842351,-0.072843,0.758482,0.647611,-0.571742,0.324296,0.75362,-0.435249,0.641041,0.632159,-0.293278,0.83781,0.460504,-0.576504,0.698381,0.424155,-0.345624,-0.222326,0.911655,-0.632334,-0.087601,0.769727,-0.814224,0.121797,0.567631,-0.655976,-0.403424,0.637922,-0.814224,-0.246232,0.525747,-0.934154,-0.040354,0.354582,-0.889881,-0.341468,0.302507,0.211012,-0.397885,0.892839,-0.595663,-0.664299,0.451544,0.390093,-0.62403,0.677063,0.51283,-0.451009,0.730477,0.625439,-0.602161,0.496213,0.77079,-0.380052,0.511315,0.658578,-0.703197,0.267935,0.76029,-0.578431,0.295597,0.902541,-0.302161,0.306787,0.976735,0.133671,0.16769,0.952883,0.301392,0.034315,0.883311,0.413607,0.220661,0.814664,0.575567,0.07103,0.700212,0.668453,0.250749,0.59564,0.798102,0.090808,0.456077,0.853516,0.251999,0.157514,0.951636,0.263778,-0,0.993586,0.113078,-0.152474,0.946587,0.284121,-0.31476,0.942439,0.112849,-0.458397,0.846103,0.271995,-0.595639,0.798097,0.090853,-0.705788,0.669971,0.230221,-0.884424,0.421206,0.200947,-0.952883,0.301395,0.034288,-0.972768,0.135088,0.188346,-0.999985,-0.000617,0.005417,-0.972767,-0.173956,0.153175,-0.952883,-0.301392,-0.034315,-0.884424,-0.455588,0.10116,-0.771771,-0.631428,0.075285,0.814664,-0.576809,-0.06012,0.714713,-0.695674,-0.072271,0.768255,-0.631744,0.10336,0.883311,-0.452614,0.122077,0.952883,-0.301395,-0.034288,0.976735,-0.167934,0.133365,0.31476,0.943695,0.101808,0.458398,0.885584,-0.074915,0.152475,0.986223,-0.064152,0.293278,0.919862,-0.260466,-0.021464,0.971387,-0.236532,-0.814664,0.576809,0.060119,-0.70021,0.707704,-0.094131,-0.88331,0.452615,-0.122078,-0.76029,0.578431,-0.295597,-0.902541,0.302161,-0.306787,-0.814664,-0.575567,-0.07103,-0.88331,-0.413608,-0.220661,-0.691093,-0.714412,-0.10957,-0.732047,-0.639938,-0.233637,-0.592346,-0.781122,-0.19742,-0.76029,-0.497216,-0.418014,-0.658578,-0.625007,-0.419095,0.999985,0.000616,-0.005416,0.972768,-0.135088,-0.188346,0.972768,0.173956,-0.153175,0.934154,0.040354,-0.354582,0.889881,0.341468,-0.302507,0.713496,0.559308,-0.422016,0.571742,0.485346,-0.661476,0.435249,0.766697,-0.471946,0.196669,0.678213,-0.70806,0.072842,0.884607,-0.460612,-0.219494,0.739342,-0.636549,-0.274888,0.878844,-0.389961,-0.551493,0.68206,-0.48026,-0.51283,0.451009,-0.730477,-0.770791,0.380051,-0.511315,-0.70451,0.080251,-0.705143,-0.877293,0.054272,-0.476876,-0.770791,-0.255437,-0.583639,-0.641572,-0.181059,-0.745388,-0.670384,-0.4656,-0.577756,0.814224,0.246232,-0.525746,0.814224,-0.121797,-0.567631,0.647606,0.136811,-0.749593,0.717212,-0.201621,-0.66705,0.357462,0.105607,-0.927937};
const GLfloat ninja_colors[] = {0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569,0,0.8,0.569};
const GLubyte ninja_indices[] = {0,1,2,2,3,4,4,5,6,6,7,8,8,9,10,10,11,12,12,13,14,14,15,16,15,17,16,18,19,17,20,21,19,22,23,21,24,25,23,26,27,25,28,29,27,30,31,29,31,32,33,33,34,35,35,36,37,37,38,39,39,40,41,41,42,43,43,44,45,45,46,47,46,48,47,49,50,48,51,52,50,53,54,52,55,56,54,57,58,56,7,5,55,59,60,58,61,0,60,56,58,6,0,62,1,2,1,3,4,3,5,6,5,7,8,7,9,10,9,11,12,11,13,14,13,15,15,18,17,18,20,19,20,22,21,22,24,23,24,26,25,26,28,27,28,30,29,30,63,31,31,63,32,33,32,34,35,34,36,37,36,38,39,38,40,41,40,42,43,42,44,45,44,46,46,49,48,49,51,50,51,53,52,53,55,54,55,57,56,57,59,58,3,1,59,1,62,61,59,1,61,59,57,3,57,55,5,3,57,5,55,53,7,53,51,9,7,53,9,51,49,13,49,46,15,46,44,18,44,42,20,42,40,20,40,38,22,20,40,22,38,36,24,36,34,26,24,36,26,34,32,30,32,63,30,30,28,34,28,26,34,24,22,38,20,18,44,18,15,46,15,13,49,13,11,51,11,9,51,59,61,60,61,62,0,60,0,2,2,4,60,4,6,58,60,4,58,6,8,54,8,10,52,10,12,52,12,14,50,52,12,50,14,16,47,16,17,45,17,19,45,19,21,43,45,19,43,21,23,39,23,25,37,25,27,37,27,29,35,37,27,35,29,31,33,33,35,29,37,39,23,39,41,21,41,43,21,45,47,16,47,48,14,48,50,14,52,54,8,54,56,6,64,65,66,67,68,69,67,69,70,64,66,71,72,73,74,75,76,77,78,79,80,64,71,81,72,74,82,75,77,83,78,80,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,97,96,102,100,97,101,98,101,103,98,100,102,101,102,104,101,101,104,103,104,93,103,96,95,102,95,105,102,102,105,104,105,106,104,104,106,93,106,91,93,98,107,99,103,108,98,93,109,103,98,108,107,108,110,107,103,109,108,109,111,108,108,111,110,111,90,110,93,92,109,92,112,109,109,112,111,112,113,111,111,113,90,113,88,90,107,114,99,110,115,107,90,116,110,107,115,114,115,117,114,110,116,115,116,118,115,115,118,117,118,87,117,90,89,116,89,119,116,116,119,118,119,120,118,118,120,87,120,85,87,114,121,99,87,122,117,87,86,122,121,97,99,123,124,121,121,124,97,124,100,97,123,125,124,125,126,124,124,126,100,126,96,100,127,128,125,125,128,126,128,129,126,126,129,96,129,94,96,130,95,94,131,132,130,84,133,131,130,132,95,132,105,95,131,133,132,133,134,132,132,134,105,134,106,105,84,80,133,80,135,133,133,135,134,135,136,134,134,136,106,136,91,106,137,92,91,138,139,137,83,140,138,137,139,92,139,112,92,138,140,139,140,141,139,139,141,112,141,113,112,83,77,140,77,142,140,140,142,141,142,143,141,141,143,113,143,88,113,144,89,88,145,146,144,82,147,145,144,146,89,146,119,89,145,147,146,147,148,146,146,148,119,148,120,119,82,74,147,74,149,147,147,149,148,149,150,148,148,150,120,150,85,120,151,86,85,81,152,153,154,128,127,153,152,154,152,155,154,154,155,128,155,129,128,81,71,152,71,156,152,152,156,155,156,157,155,155,157,129,157,94,129,136,137,91,135,158,136,80,159,135,136,158,137,158,138,137,135,159,158,159,160,158,158,160,138,160,83,138,80,79,159,79,161,159,159,161,160,161,162,160,160,162,83,162,75,83,143,144,88,142,163,143,77,164,142,143,163,144,163,145,144,142,164,163,164,165,163,163,165,145,165,82,145,77,76,164,76,166,164,164,166,165,166,167,165,165,167,82,167,72,82,150,151,85,149,168,150,74,169,149,150,168,151,168,170,151,149,169,168,169,171,168,168,171,170,171,172,170,74,73,169,73,173,169,169,173,171,173,174,171,157,130,94,156,175,157,71,176,156,157,175,130,175,131,130,156,176,175,176,177,175,175,177,131,177,84,131,71,66,176,66,178,176,176,178,177,178,179,177,177,179,84,179,78,84,180,79,78,181,182,180,70,183,181,180,182,79,182,161,79,181,183,182,183,184,182,182,184,161,184,162,161,70,69,183,69,185,183,183,185,184,185,186,184,184,186,162,186,75,162,186,76,75,185,187,186,69,188,185,186,187,76,187,166,76,185,188,187,188,189,187,187,189,166,189,167,166,69,68,188,68,190,188,188,190,189,190,191,189,189,191,167,191,72,167,191,73,72,190,192,191,68,193,190,191,192,73,192,173,73,190,193,192,193,194,192,192,194,173,194,174,173,179,180,78,178,195,179,66,196,178,179,195,180,195,181,180,178,196,195,196,197,195,195,197,181,197,70,181,66,65,196,65,198,196,196,198,197,197,199,70,199,67,70};
const GLsizeiptr ninja_numind = 1107;
const GLsizeiptr ninja_numvert = 200;

#endif
