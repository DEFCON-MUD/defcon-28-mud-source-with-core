inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 0 }));
  set_short( "Corridor - x41y4z0" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y4z0.c",
  "east" : DIR+"/rooms/x42y4z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
