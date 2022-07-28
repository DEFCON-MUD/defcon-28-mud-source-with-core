inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 6 }));
  set_short( "Passage - x14y58z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z6.c",
  "east" : DIR+"/rooms/x15y58z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
