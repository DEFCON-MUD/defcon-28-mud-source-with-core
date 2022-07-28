inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 19, 4 }));
  set_short( "Hallway - x29y19z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y20z4.c",
  "south" : DIR+"/rooms/x29y18z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
