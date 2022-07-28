inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 37, 8 }));
  set_short( "Passage - x55y37z8" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y38z8.c",
  "south" : DIR+"/rooms/x55y36z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
