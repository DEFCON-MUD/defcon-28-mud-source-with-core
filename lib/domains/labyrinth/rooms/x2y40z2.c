inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 40, 2 }));
  set_short( "Hallway - x2y40z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y40z2.c",
  "east" : DIR+"/rooms/x3y40z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
