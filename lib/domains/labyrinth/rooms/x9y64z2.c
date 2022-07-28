inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 64, 2 }));
  set_short( "Passage - x9y64z2" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y64z2.c",
  "east" : DIR+"/rooms/x10y64z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
