#include "helpers.h"
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Detect edges
//void edges(int height, int width, RGBTRIPLE image[height][width])
//{
RGBTRIPLE copy[height][width];
//RGBTRIPLE column[height][width];
RGBTRIPLE row[height][width];
RGBTRIPLE kernel[height][width];
int GX_red;
int GX_green;
int GX_blue;
int GY_red;
int GY_green;
int GY_blue;


//seting up first edge
    for (int q = 0; q < width;q++)
    {
        image[0][q].rgbtRed = 3;
        image[0][q].rgbtGreen = 57;
        image[0][q].rgbtBlue = 118;
    }
// second edge
    for (int w = 0; w < height;w++)
    {
        image[w][width-1].rgbtRed = 3;
        image[w][width-1].rgbtGreen = 57;
        image[w][width-1].rgbtBlue = 118;
    }
//third edge
for (int e = 0; e < width;e++)
    {
        image[height-1][e].rgbtRed = 3;
        image[height-1][e].rgbtGreen = 57;
        image[height-1][e].rgbtBlue = 118;
    }
//fourth edge
for (int r = 0; r < height;r++)
    {
        image[r][0].rgbtRed = 3;
        image[r][0].rgbtGreen = 57;
        image[r][0].rgbtBlue = 118;
    }



// 1. make copy for each pixel
    //for (int i = 0; i < height ; i++)
   // {
   //     for (int j = 0; j < width; j++)
    //    {
    //        copy[i][j] = image[i][j];
    //    }
   // }

// 2. assigning Gx and Gy value for each color for each pixel
for (int a = 1; a < height - 1; a++)
    {
        for (int b = 1; b < width - 1 ; b++)
        {

            GX_red = -1*(image[a-1][b-1].rgbtRed) + 0*(image[a-1][b].rgbtRed) + 1*(image[a-1][b+1].rgbtRed)
            + (-2*(image[a][b-1].rgbtRed)) + 0*(image[a][b].rgbtRed) + 2*(image[a][b+1].rgbtRed)
            + (-1*(image[a+1][b-1].rgbtRed)) + 0*(image[a+1][b].rgbtRed) + 1*(image[a+1][b+1].rgbtRed);

            GX_green = -1*(image[a-1][b-1].rgbtGreen) + 0*(image[a-1][b].rgbtGreen) + 1*(image[a-1][b+1].rgbtGreen)
            + (-2*(image[a][b-1].rgbtGreen)) + 0*(image[a][b].rgbtGreen) + 2*(image[a][b+1].rgbtGreen)
            + (-1*(image[a+1][b-1].rgbtGreen)) + 0*(image[a+1][b].rgbtGreen) + 1*(image[a+1][b+1].rgbtGreen);

            GX_blue = -1*(image[a-1][b-1].rgbtBlue) + 0*(image[a-1][b].rgbtBlue) + 1*(image[a-1][b+1].rgbtBlue)
            + (-2*(image[a][b-1].rgbtBlue)) + 0*(image[a][b].rgbtBlue) + 2*(image[a][b+1].rgbtBlue)
            + (-1*(image[a+1][b-1].rgbtBlue)) + 0*(image[a+1][b].rgbtBlue) + 1*(image[a+1][b+1].rgbtBlue);

             GY_red = -1*(image[a-1][b-1].rgbtRed) + (-2*(image[a-1][b].rgbtRed)) + (-1*(image[a-1][b+1].rgbtRed))
            + 0*(image[a][b-1].rgbtRed) + 0*(image[a][b].rgbtRed) + 0*(image[a][b+1].rgbtRed)
            + 1*(image[a+1][b-1].rgbtRed) + 2*(image[a+1][b].rgbtRed) + 1*(image[a+1][b+1].rgbtRed);

             GY_green = -1*(image[a-1][b-1].rgbtGreen) + (-2*(image[a-1][b].rgbtGreen)) + (-1*(image[a-1][b+1].rgbtGreen))
            + 0*(image[a][b-1].rgbtGreen) + 0*(image[a][b].rgbtGreen) + 0*(image[a][b+1].rgbtGreen)
            + 1*(image[a+1][b-1].rgbtGreen) + 2*(image[a+1][b].rgbtGreen) + 1*(image[a+1][b+1].rgbtGreen);

            GY_blue = -1*(image[a-1][b-1].rgbtBlue) + (-2*(image[a-1][b].rgbtBlue)) + (-1*(image[a-1][b+1].rgbtBlue))
            + 0*(image[a][b-1].rgbtBlue) + 0*(image[a][b].rgbtBlue) + 0*(image[a][b+1].rgbtBlue)
            + 1*(image[a+1][b-1].rgbtBlue) + 2*(image[a+1][b].rgbtBlue) + 1*(image[a+1][b+1].rgbtBlue);


                if ( GX_red >= 255)
                {
                    GX_red = 255;
                }
                else if (GX_red <= -255)
                {
                    GX_red = -255;
                }

                if (GY_red >= 255)
               {
               GY_red = 255;
               }
               else if (GY_red <= -255)
                {
                    GY_red = -255;
                }


               if (GX_green <= -255)
                {
                    GX_green = -255;
                }
                else if (GX_green >= 255)
                {
                GX_green = 255;
                }

                 if (GY_green >= 255)
                {
                GY_green = 255;
                }
                else if (GY_green <= -255)
                {
                    GY_green = -255;
                }

                 if (GX_blue >= 255)
                {
                GX_blue = 255;
                }
                else if (GX_blue <= -255)
                {
                    GX_blue = -255;
                }
                if (GY_blue >= 255)
                {
                GY_blue = 255;
                }
                else if (GY_blue <= -255)
                {
                    GY_blue = -255;
                }


 //also round it, capped at 255, and allow only positive results
                int kernel_blue = pow(GX_blue,2) + pow(GY_blue,2);

                 if ( kernel_blue >= 255)
                {
                kernel_blue = 255;
               }

                    copy[a][b].rgbtBlue = kernel_blue;


                int kernel_green = pow(GX_green,2) + pow(GY_green,2);

               if ( kernel_green >= 255)
                {
                kernel_green = 255;
                }

                   copy[a][b].rgbtGreen = kernel_green;

                int kernel_red = pow(GX_red,2) + pow(GY_red,2);

              if (kernel_red >= 255)
               {
                   kernel_red = 255;
               }
                copy[a][b].rgbtRed = kernel_red;


                row[a][b].rgbtRed= copy[a][b].rgbtRed;
                row[a][b].rgbtGreen= copy[a][b].rgbtGreen;
                row[a][b].rgbtBlue= copy[a][b].rgbtBlue;

        }
    }

  //assigning new pixels to output
    for (int x = 1; x < height - 1; x++)
    {
        for (int y = 1; y < width - 1; y++)
   {
         image[x][y] = row[x][y];

        }
    }
}

void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    // Make copy of image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }

    // Sobel Operator matrices for Gx and Gy
    int kernel_Gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int kernel_Gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

    // Iterate through the height or also known as each row
    for (int i = 0; i < height; i++)
    {
        // Iterate through the width or also known as each pixel/column
        for (int j = 0; j < width; j++)
        {
            // Initialize values for weighted sums in the x direction
            double gx_blue = 0;
            double gx_green = 0;
            double gx_red = 0;
            // Initialize values for weighted sums in the y direction
            double gy_blue = 0;
            double gy_green = 0;
            double gy_red = 0;
            // Counter to detect what row of the 3x3 the loop is iterating
            int row = 0;

            // Loop to check the surrounding pixels within 1 row
            for (int k = i - 1; k <= i + 1; k++)
            {
                // Counter to detect what column of the 3x3 grid the loop is iterating
                int column = 0;
                // Loop to check the surrounding pixels within 1 column
                for (int l = j - 1; l <= j + 1; l++)
                {
                    // Only adds pixels that are within the image boundaries
                    if (k >= 0 && l >= 0 && k < height && l < width)
                    {
                        // Calculate Gx
                        gx_blue += (kernel_Gx[row][column] * temp[k][l].rgbtBlue);
                        gx_green += (kernel_Gx[row][column] * temp[k][l].rgbtGreen);
                        gx_red += (kernel_Gx[row][column] * temp[k][l].rgbtRed);
                        // Calculate Gy
                        gy_blue += (kernel_Gy[row][column] * temp[k][l].rgbtBlue);
                        gy_green += (kernel_Gy[row][column] * temp[k][l].rgbtGreen);
                        gy_red += (kernel_Gy[row][column] * temp[k][l].rgbtRed);
                    }
                    column++;
                }
                row++;
            }
            // Combine Gx and Gy
            int sobel_blue = round(sqrt(pow(gx_blue, 2) + pow(gy_blue, 2)));
            int sobel_green = round(sqrt(pow(gx_green, 2) + pow(gy_green, 2)));
            int sobel_red = round(sqrt(pow(gx_red, 2) + pow(gy_red, 2)));

            // Set the new colour values for the iterated pixel and cap at 255 if necessary
            image[i][j].rgbtBlue = (sobel_blue > 255) ? 255 : sobel_blue;
            image[i][j].rgbtGreen = (sobel_green > 255) ? 255 : sobel_green;
            image[i][j].rgbtRed = (sobel_red > 255) ? 255 : sobel_red;
        }
    }
    return;
}