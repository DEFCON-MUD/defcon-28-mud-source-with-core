inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 2, 7 }));
  set_short( "Hallway - x13y2z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y2z7.c",
  "north" : DIR+"/rooms/x13y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
