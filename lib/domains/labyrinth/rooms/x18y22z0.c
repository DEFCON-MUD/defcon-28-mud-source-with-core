inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 22, 0 }));
  set_short( "Corridor - x18y22z0" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y22z0.c",
  "east" : DIR+"/rooms/x19y22z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
