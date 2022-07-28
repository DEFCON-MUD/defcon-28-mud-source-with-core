inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 23, 8 }));
  set_short( "Passage - x5y23z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y24z8.c",
  "south" : DIR+"/rooms/x5y22z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
