inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 22, 9 }));
  set_short( "Passage - x40y22z9" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y22z9.c",
  "east" : DIR+"/rooms/x41y22z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
