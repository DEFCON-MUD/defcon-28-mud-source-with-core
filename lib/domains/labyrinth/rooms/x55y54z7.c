inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 7 }));
  set_short( "Hallway - x55y54z7" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y54z7.c",
  "north" : DIR+"/rooms/x55y55z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
