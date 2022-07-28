inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 56, 0 }));
  set_short( "Hallway - x17y56z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y57z0.c",
  "south" : DIR+"/rooms/x17y55z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
