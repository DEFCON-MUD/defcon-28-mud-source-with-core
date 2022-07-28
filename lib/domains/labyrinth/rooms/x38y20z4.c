inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 20, 4 }));
  set_short( "Passage - x38y20z4" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y20z4.c",
  "east" : DIR+"/rooms/x39y20z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
