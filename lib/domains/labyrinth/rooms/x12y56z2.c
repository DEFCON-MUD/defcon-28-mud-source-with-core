inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 56, 2 }));
  set_short( "Passage - x12y56z2" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y56z2.c",
  "east" : DIR+"/rooms/x13y56z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
