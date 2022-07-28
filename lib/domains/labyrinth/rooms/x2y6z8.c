inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 6, 8 }));
  set_short( "Passage - x2y6z8" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y6z8.c",
  "east" : DIR+"/rooms/x3y6z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
