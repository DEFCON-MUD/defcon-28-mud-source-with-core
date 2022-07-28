inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 3 }));
  set_short( "Corridor - x53y17z3" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z3.c",
  "south" : DIR+"/rooms/x53y16z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
