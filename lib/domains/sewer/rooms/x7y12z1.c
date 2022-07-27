inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 12, 1 }));
  set_short( "Hallway - x7y12z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y12z1.c",
  "north" : DIR+"/rooms/x7y13z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
