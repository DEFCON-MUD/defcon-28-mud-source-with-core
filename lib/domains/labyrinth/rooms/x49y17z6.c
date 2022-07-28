inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 17, 6 }));
  set_short( "Hallway - x49y17z6" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y18z6.c",
  "south" : DIR+"/rooms/x49y16z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
