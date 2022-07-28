inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 12, 0 }));
  set_short( "Hallway - x41y12z0" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y12z0.c",
  "south" : DIR+"/rooms/x41y11z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
