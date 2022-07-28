inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 28, 4 }));
  set_short( "Passage - x28y28z4" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y28z4.c",
  "east" : DIR+"/rooms/x29y28z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
