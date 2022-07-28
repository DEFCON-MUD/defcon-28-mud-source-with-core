inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 0 }));
  set_short( "Corridor - x57y12z0" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y12z0.c",
  "north" : DIR+"/rooms/x57y13z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
