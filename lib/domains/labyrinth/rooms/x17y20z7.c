inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 7 }));
  set_short( "Passage - x17y20z7" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y20z7.c",
  "east" : DIR+"/rooms/x18y20z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
