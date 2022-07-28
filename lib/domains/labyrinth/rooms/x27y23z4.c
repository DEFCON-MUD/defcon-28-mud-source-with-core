inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 23, 4 }));
  set_short( "Corridor - x27y23z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y24z4.c",
  "south" : DIR+"/rooms/x27y22z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
