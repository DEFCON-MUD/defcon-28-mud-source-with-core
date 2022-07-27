inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 1 }));
  set_short( "Hallway - x57y20z1" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y20z1.c",
  "north" : DIR+"/rooms/x57y21z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
