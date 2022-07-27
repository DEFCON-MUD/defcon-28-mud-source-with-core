inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 27, 6 }));
  set_short( "Hallway - x19y27z6" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y28z6.c",
  "south" : DIR+"/rooms/x19y26z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
