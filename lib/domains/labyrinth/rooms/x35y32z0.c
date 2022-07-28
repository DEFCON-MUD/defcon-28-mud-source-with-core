inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 32, 0 }));
  set_short( "Passage - x35y32z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y32z0.c",
  "east" : DIR+"/rooms/x36y32z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
