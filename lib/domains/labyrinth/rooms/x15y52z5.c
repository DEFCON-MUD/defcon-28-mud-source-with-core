inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 5 }));
  set_short( "Hallway - x15y52z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y52z5.c",
  "north" : DIR+"/rooms/x15y53z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
