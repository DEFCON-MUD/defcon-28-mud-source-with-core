inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 55, 4 }));
  set_short( "Corridor - x23y55z4" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y56z4.c",
  "south" : DIR+"/rooms/x23y54z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
