cl1 = 1;
Point(1) = {0, 0, 0, cl1};
Point(2) = {1, 0, 0, cl1};
Point(3) = {1, 1, 0, cl1};
Point(4) = {0, 1, 0, cl1};
Line(1) = {2, 1};
Line(2) = {1, 4};
Line(3) = {4, 3};
Line(4) = {3, 2};
Line Loop(10) = {4, 1, 2, 3};
Plane Surface(10) = {10};
Physical Point(1) = {1, 2};
Physical Point(2) = {3, 4};
Physical Line(1) = {1, 4};
Physical Line(2) = {2, 3};
Physical Surface(3) = {10};
