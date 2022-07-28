inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 8 }));
  set_short( "Corridor - x1y25z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z8.c",
  "south" : DIR+"/rooms/x1y24z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
