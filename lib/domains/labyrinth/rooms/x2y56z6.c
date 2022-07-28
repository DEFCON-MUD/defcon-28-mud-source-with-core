inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 56, 6 }));
  set_short( "Passage - x2y56z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y56z6.c",
  "east" : DIR+"/rooms/x3y56z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
