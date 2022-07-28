inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 17, 4 }));
  set_short( "Corridor - x37y17z4" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y18z4.c",
  "south" : DIR+"/rooms/x37y16z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
