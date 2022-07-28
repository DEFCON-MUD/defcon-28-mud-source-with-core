inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 26, 9 }));
  set_short( "Passage - x14y26z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y26z9.c",
  "east" : DIR+"/rooms/x15y26z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
