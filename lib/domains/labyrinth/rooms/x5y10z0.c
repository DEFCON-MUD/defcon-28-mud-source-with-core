inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 0 }));
  set_short( "Hallway - x5y10z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y10z0.c",
  "north" : DIR+"/rooms/x5y11z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
