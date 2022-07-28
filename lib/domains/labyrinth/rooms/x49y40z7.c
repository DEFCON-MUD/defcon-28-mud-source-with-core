inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 40, 7 }));
  set_short( "Passage - x49y40z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y40z7.c",
  "north" : DIR+"/rooms/x49y41z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
