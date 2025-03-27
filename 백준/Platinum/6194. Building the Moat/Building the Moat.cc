#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
    bool operator<(const Point& p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
};

double dist(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) +  (a.y - b.y) * (a.y - b.y));
}

int ccw(Point a, Point b, Point c) {
    double cross = (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
    return (cross > 0) - (cross < 0); // 양수면 반시계(1), 음수면 시계(-1), 0이면 일직선(0)
}

vector<Point> grahamScan(vector<Point>& points) {
    int n = points.size();
    if (n <= 2) return points;

    sort(points.begin(), points.end());

    vector<Point> hull;

    // 아래쪽 껍질(lower hull)
    for (const auto& p : points) {
        while (hull.size() >= 2 && ccw(hull[hull.size() - 2], hull.back(), p) <= 0) {
            hull.pop_back();
        }
        hull.push_back(p);
    }

    // 위쪽 껍질(upper hull)
    int lower_size = hull.size();
    for (int i = n - 2; i >= 0; --i) {
        while (hull.size() > lower_size && ccw(hull[hull.size() - 2], hull.back(), points[i]) <= 0) {
            hull.pop_back();
        }
        hull.push_back(points[i]);
    }

    hull.pop_back(); // 마지막 점 중복 제거
    return hull;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Point> points(n);
    for (int i = 0; i < n; i++) cin >> points[i].x >> points[i].y;

    vector<Point> hull = grahamScan(points);

    double result = dist(hull[0], hull[hull.size() - 1]);
    for (int i = 0; i < hull.size() - 1; i++) {
        result += dist(hull[i], hull[i + 1]);
    }

    cout << fixed;
    cout.precision(2);
    cout << result;
    return 0;
}