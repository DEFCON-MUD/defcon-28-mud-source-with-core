inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 36, 8 }));
  set_short( "Passage - x49y36z8" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y37z8.c",
  "south" : DIR+"/rooms/x49y35z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
