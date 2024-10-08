inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 27, 6 }));
  set_short( "Hallway - x15y27z6" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y28z6.c",
  "south" : DIR+"/rooms/x15y26z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
