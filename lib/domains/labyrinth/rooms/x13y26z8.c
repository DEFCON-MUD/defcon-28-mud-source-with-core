inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 8 }));
  set_short( "Passage - x13y26z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y26z8.c",
  "south" : DIR+"/rooms/x13y25z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
