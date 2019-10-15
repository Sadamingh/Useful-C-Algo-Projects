/**
 * @file HSLAPixel.h
 *
 * @author CS 225: Data Structures
 * @version 2018r1-lab1
 */

#ifndef CS225_HSLAPIXEL_H_
#define CS225_HSLAPIXEL_H_

#include <iostream>
#include <sstream>

namespace cs225 {
	class HSLAPixel {
		public:
			/**
			* Considering the defination of HSLAPixel with a reference of the document in the GUIDE 
			* file, we have to define the variables here. 
			**/

			/**
			* Hue (denoted as h) defines the color itself, for example, red in distinction to blue 
			* or yellow. The values for the hue axis run from 0–360° beginning and ending with red 
			* and running through green, blue and all intermediary colors like greenish-blue, orange, 
			* purple, etc.
			**/

			//Let h denote the hue of the pixel, storing the value of the hue in degrees as a double from
			// [0, 360).
			double h; // <REPLACE WITH YOUR CODE HERE>
			
			/**
			 * Saturation (denoted as s) indicates the degree to which the hue differs from a neutral
			 *  gray. The values run from 0%, which is no color saturation, to 100%, which is the fullest 
			 * saturation of a given hue at a given percentage of illumination.
			**/

			//Let s denote the saturation of the pixel, storing the value as a double from [0, 1].
			double s; // <REPLACE WITH YOUR CODE HERE>

			/**
			 * Luminance (denoted as l) indicates the level of illumination. The values run as percentages; 
			 * 0% appears black (no light) while 100% is full illumination, which washes out the color (it 
			 * appears white).
			**/

			//Let l denote the luminance of the pixel, storing the value as a double from [0, 1].
			double l; // <REPLACE WITH YOUR CODE HERE>


			//Let a denote the alpha channel, how transparent the pixel is, storing the value as a double 
			//from [0, 1].
			double a; // <REPLACE WITH YOUR CODE HERE>




			/**
			 * Additioanlly, you will need to complete three constructors defined as following:
			**/

			//Constructs a default HSLAPixel.
    		/**
			 * A default pixel is completely opaque (non-transparent) and white. Opaque implies that the
			 * alpha component of the pixel is 1.0. Lower alpha values are (semi-)transparent.
			**/
			HSLAPixel(); // <REPLACE WITH YOUR CODE HERE>

			//Constructs an opaque HSLAPixel with the given hue, saturation, and luminance values.
			HSLAPixel(double hue, double saturation, double luminance); // <REPLACE WITH YOUR CODE HERE>

			//Constructs an HSLAPixel with the given hue, saturation, luminance, and alpha values.
			HSLAPixel(double hue, double saturation, double luminance, double alpha);  // <REPLACE WITH YOUR CODE HERE>
			
	};
}

#endif
