inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 7 }));
  set_short( "Passage - x33y46z7" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z7.c",
  "east" : DIR+"/rooms/x34y46z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
