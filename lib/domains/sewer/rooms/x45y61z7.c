inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 61, 7 }));
  set_short( "Corridor - x45y61z7" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y62z7.c",
  "south" : DIR+"/rooms/x45y60z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
