inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 42, 4 }));
  set_short( "Passage - x36y42z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y42z4.c",
  "east" : DIR+"/rooms/x37y42z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
