inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 4 }));
  set_short( "Hallway - x35y20z4" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y21z4.c",
  "south" : DIR+"/rooms/x35y19z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
