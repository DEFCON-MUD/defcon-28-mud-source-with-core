inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 4 }));
  set_short( "Corridor - x1y61z4" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z4.c",
  "south" : DIR+"/rooms/x1y60z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
