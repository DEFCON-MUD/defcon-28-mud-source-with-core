inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 1 }));
  set_short( "Hallway - x59y26z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y26z1.c",
  "north" : DIR+"/rooms/x59y27z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
