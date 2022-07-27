inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 4 }));
  set_short( "Hallway - x31y27z4" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z4.c",
  "south" : DIR+"/rooms/x31y26z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
