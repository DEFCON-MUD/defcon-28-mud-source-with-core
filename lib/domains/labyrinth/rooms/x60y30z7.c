inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 30, 7 }));
  set_short( "Passage - x60y30z7" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y30z7.c",
  "east" : DIR+"/rooms/x61y30z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
