inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 32, 8 }));
  set_short( "Passage - x34y32z8" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y32z8.c",
  "east" : DIR+"/rooms/x35y32z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
