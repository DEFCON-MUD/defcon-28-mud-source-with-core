inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 0 }));
  set_short( "Passage - x49y18z0" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y19z0.c",
  "south" : DIR+"/rooms/x49y17z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
