inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 49, 6 }));
  set_short( "Hallway - x11y49z6" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y50z6.c",
  "south" : DIR+"/rooms/x11y48z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
