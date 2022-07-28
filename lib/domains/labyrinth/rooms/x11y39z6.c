inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 39, 6 }));
  set_short( "Hallway - x11y39z6" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y40z6.c",
  "south" : DIR+"/rooms/x11y38z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
