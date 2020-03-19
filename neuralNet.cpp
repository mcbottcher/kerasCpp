// main.cpp
#include <fdeep/fdeep.hpp>
#include "CSVreader.h"

#include "netPredict.h"

#include <vector>

using namespace std;


NeuralNet::NeuralNet(){
    
    _model = fdeep::load_model("fdeep_model.json");
    

}

NeuralNet::~NeuralNet(){

}

void NerualNet::predict(){
    const auto result = model.predict({fdeep::tensor(fdeep::tensor_shape(static_cast<std::size_t>(220)),                                            {mikkel[0],mikkel[1],mikkel[2],mikkel[3],mikkel[4],mikkel[5],mikkel[6],mikkel[7],mikkel[8],mikkel[9],mikkel[10],mikkel[11],mikkel[12],mikkel[13],mikkel[14],mikkel[15],mikkel[16],mikkel[17],mikkel[18],mikkel[19],mikkel[20],mikkel[21],mikkel[22],mikkel[23],mikkel[24],mikkel[25],mikkel[26],mikkel[27],mikkel[28],mikkel[29],mikkel[30],mikkel[31],mikkel[32],mikkel[33],mikkel[34],mikkel[35],mikkel[36],mikkel[37],mikkel[38],mikkel[39],mikkel[40],mikkel[41],mikkel[42],mikkel[43],mikkel[44],mikkel[45],mikkel[46],mikkel[47],mikkel[48],mikkel[49],mikkel[50],mikkel[51],mikkel[52],mikkel[53],mikkel[54],mikkel[55],mikkel[56],mikkel[57],mikkel[58],mikkel[59],mikkel[60],mikkel[61],mikkel[62],mikkel[63],mikkel[64],mikkel[65],mikkel[66],mikkel[67],mikkel[68],mikkel[69],mikkel[70],mikkel[71],mikkel[72],mikkel[73],mikkel[74],mikkel[75],mikkel[76],mikkel[77],mikkel[78],mikkel[79],mikkel[80],mikkel[81],mikkel[82],mikkel[83],mikkel[84],mikkel[85],mikkel[86],mikkel[87],mikkel[88],mikkel[89],mikkel[90],mikkel[91],mikkel[92],mikkel[93],mikkel[94],mikkel[95],mikkel[96],mikkel[97],mikkel[98],mikkel[99],mikkel[100],mikkel[101],mikkel[102],mikkel[103],mikkel[104],mikkel[105],mikkel[106],mikkel[107],mikkel[108],mikkel[109],mikkel[110],mikkel[111],mikkel[112],mikkel[113],mikkel[114],mikkel[115],mikkel[116],mikkel[117],mikkel[118],mikkel[119],mikkel[120],mikkel[121],mikkel[122],mikkel[123],mikkel[124],mikkel[125],mikkel[126],mikkel[127],mikkel[128],mikkel[129],mikkel[130],mikkel[131],mikkel[132],mikkel[133],mikkel[134],mikkel[135],mikkel[136],mikkel[137],mikkel[138],mikkel[139],mikkel[140],mikkel[141],mikkel[142],mikkel[143],mikkel[144],mikkel[145],mikkel[146],mikkel[147],mikkel[148],mikkel[149],mikkel[150],mikkel[151],mikkel[152],mikkel[153],mikkel[154],mikkel[155],mikkel[156],mikkel[157],mikkel[158],mikkel[159],mikkel[160],mikkel[161],mikkel[162],mikkel[163],mikkel[164],mikkel[165],mikkel[166],mikkel[167],mikkel[168],mikkel[169],mikkel[170],mikkel[171],mikkel[172],mikkel[173],mikkel[174],mikkel[175],mikkel[176],mikkel[177],mikkel[178],mikkel[179],mikkel[180],mikkel[181],mikkel[182],mikkel[183],mikkel[184],mikkel[185],mikkel[186],mikkel[187],mikkel[188],mikkel[189],mikkel[190],mikkel[191],mikkel[192],mikkel[193],mikkel[194],mikkel[195],mikkel[196],mikkel[197],mikkel[198],mikkel[199],mikkel[200],mikkel[201],mikkel[202],mikkel[203],mikkel[204],mikkel[205],mikkel[206],mikkel[207],mikkel[208],mikkel[209],mikkel[210],mikkel[211],mikkel[212],mikkel[213],mikkel[214],mikkel[215],mikkel[216],mikkel[217],mikkel[218],mikkel[219]})});
        std::cout << fdeep::show_tensors(result) << std::endl;
}

void NeuralNet::insertSample(float* sampleBuff){
    
    for(int i=0; i<11; i++){
        
        
    }
    
    
}

/*

for(int i=0; i<NUMBER_OF_ROWS; i++){
    float* rowptr = netInputs[i][0];
    
    for(int j=0; j<NUMBER_OF_COLUMNS; j++){
        
        memmove(rowptr, &rowptr[1], sizeof(float)*(NUMBER_OF_COLUMNS-1));
        rowptr[0] = sample; 
    
    }

}

*/




