inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 1 }));
  set_short( "Hallway - x15y50z1" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y50z1.c",
  "north" : DIR+"/rooms/x15y51z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
