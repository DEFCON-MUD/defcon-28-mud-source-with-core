inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 61, 1 }));
  set_short( "Hallway - x31y61z1" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y62z1.c",
  "south" : DIR+"/rooms/x31y60z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
