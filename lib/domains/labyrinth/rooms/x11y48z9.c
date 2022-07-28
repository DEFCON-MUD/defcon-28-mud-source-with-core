inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 9 }));
  set_short( "Passage - x11y48z9" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y49z9.c",
  "south" : DIR+"/rooms/x11y47z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
