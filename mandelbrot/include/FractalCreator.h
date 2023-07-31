#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <memory>
#include <cstdint>
#include <math.h>
#include <string>
#include <vector>

#include "Zoom.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "Mandelbrot.h"
#include "RGB.h"




using namespace std;
namespace mandelbrot {
	class FractalCreator {
	private:
		int m_width;
		int m_height;
		int m_total{ 0 };
		unique_ptr<int[]> m_histogram;
		unique_ptr<int[]> m_fractal;
		Bitmap m_bitmap;
		ZoomList m_zoomList;
		vector <int> m_ranges;
		vector <RGB> m_colors;
		vector<int> m_rangeTotals;
		bool m_GotFirstRange{ false };

		void calculateIteraions();
		void calcualteTotalIterations();
		void drawFractal();
		void writeBitmap(string name);
		void calculateRangetotals();
		int getRange(int iterations) const;

	public:
		FractalCreator(int width, int height);
		virtual ~FractalCreator();
		void addRange(double rangeEnd, const RGB& rgb);
		void run(string name); 
		void addZoom(const Zoom& zoom);
		
	
	
	};

}
#endif // !FRACTALCREATOR_H_