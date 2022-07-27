inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 7 }));
  set_short( "Corridor - x37y24z7" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y24z7.c",
  "north" : DIR+"/rooms/x37y25z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
