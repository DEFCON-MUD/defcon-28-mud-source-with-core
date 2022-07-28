inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 64, 8 }));
  set_short( "Passage - x25y64z8" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y64z8.c",
  "east" : DIR+"/rooms/x26y64z8.c",
  "south" : DIR+"/rooms/x25y63z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
