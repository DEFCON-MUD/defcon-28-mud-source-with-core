inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 42, 4 }));
  set_short( "Hallway - x47y42z4" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y43z4.c",
  "south" : DIR+"/rooms/x47y41z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
