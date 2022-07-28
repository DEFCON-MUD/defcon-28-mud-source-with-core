inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 9 }));
  set_short( "Passage - x47y6z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y6z9.c",
  "south" : DIR+"/rooms/x47y5z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
