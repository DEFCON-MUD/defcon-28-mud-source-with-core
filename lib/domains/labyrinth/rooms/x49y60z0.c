inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 0 }));
  set_short( "Hallway - x49y60z0" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z0.c",
  "north" : DIR+"/rooms/x49y61z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
