inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 32, 5 }));
  set_short( "Passage - x25y32z5" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y32z5.c",
  "east" : DIR+"/rooms/x26y32z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
