inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 62, 7 }));
  set_short( "Hallway - x29y62z7" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y62z7.c",
  "south" : DIR+"/rooms/x29y61z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
