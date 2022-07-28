inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 19, 0 }));
  set_short( "Hallway - x33y19z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y20z0.c",
  "south" : DIR+"/rooms/x33y18z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
