#include "pixel.hpp"

pixel::pixel(int val){
	this->val=val;
}

pixel::pixel(const pixel& obj){
	this->val=obj.val;
}

int pixel::getVal()const {
	return this->val;
}
