inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 1 }));
  set_short( "Corridor - x41y8z1" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y9z1.c",
  "south" : DIR+"/rooms/x41y7z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
