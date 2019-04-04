#define PI 3.14159

enum{RECTANGLE,CIRCLE};

struct point {int x, y;};

struct shape {
  int shape_kind;
  struct point center;
  union {
    struct {
      int height,width;

    }rectangle;
    struct {
      int radius;
    }circle;
  }u;
}s;


int compute_area(struct shape s)
{
  if(s.shape_kind == RECTANGLE)
      return s.u.rectangle.height * s.u.rectangle.width;
  else
      return PI * s.u.circle.radius * s.u.circle.radius;
}
struct shape move_shape (struct shape s,int x,int y)
{
  s.center.x +=x;
  s.center.y +=y;
  return s;
}
struct shape scale_shape(struct shape s,double c)
{
    if(s.shape_kind == RECTANGLE)
    {
        s.u.rectangle.width *=c;
        s.u.rectangle.height *=c;
    }
    else
      s.u.circle.radius *=c;
    return s;
}


