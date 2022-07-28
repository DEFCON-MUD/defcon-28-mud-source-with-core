inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 36, 0 }));
  set_short( "Passage - x34y36z0" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y36z0.c",
  "east" : DIR+"/rooms/x35y36z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
