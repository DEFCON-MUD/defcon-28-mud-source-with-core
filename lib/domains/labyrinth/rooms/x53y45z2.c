inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 45, 2 }));
  set_short( "Hallway - x53y45z2" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y46z2.c",
  "south" : DIR+"/rooms/x53y44z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
