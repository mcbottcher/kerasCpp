

class NeuralNet{

    public:
        NeuralNet();
        ~NeuralNet();

	    void predict();

	    void insertSamples(float* sampleBuff);
        
    private:
        
        const auto _model;
        
        //11 rows, 20 columns
        float netInputs[11][20];
        
        
	                

};
