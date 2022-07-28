inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 4, 2 }));
  set_short( "Corridor - x20y4z2" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y4z2.c",
  "east" : DIR+"/rooms/x21y4z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
