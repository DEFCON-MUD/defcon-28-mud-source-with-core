inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 0 }));
  set_short( "Corridor - x22y0z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z0.c",
  "east" : DIR+"/rooms/x23y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
