#pragma once
#include <iostream>
#include <vector>
using namespace std;

//template <typename T> class Conjunto;

template <typename T>
class Conjunto {
	public:
		Conjunto(){
		}
		~Conjunto(){
		}

		void insert(T value){
			if(!find(value)){
				int j = arr.size()-1;
				arr.push_back(value);
				while( j >= 0 && arr[j] > value){
					arr[j+1] = arr[j];
					j--;
				}
				arr[j+1] = value;

			}
		}
		void remove(T value){
			int i;

			for(i = 0; i < arr.size(); i++){
				if(arr[i] == value) break;
			}

			for(int j = i; j < arr.size()-1; j++){
				arr[j] = arr[j+1];
			}
			
			arr.pop_back();
		}
		bool find(T value){
			int start = 0;
			int end = arr.size() - 1;
			while( start < end ){
				int mid = (start+end)/2;
				if(arr[mid] == value){
					return true;
				}else if( arr[mid] > value){
					end = mid-1;
				}else{
					start = mid+1;
				}
			}
			return false;
		}
		int size() const{
			return arr.size();
		}
		friend ostream &operator<<( ostream &output, const Conjunto<T> &c ){
			output << "[";
			output << c.arr[0];
			for(int i = 1; i < c.size() ; i++)
				output << "," << c.arr[i];
			output << "]";
			return output;
		}
	private:
		vector <T> arr;
};



