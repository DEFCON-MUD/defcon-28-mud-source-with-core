inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 4, 1 }));
  set_short( "Passage - x11y4z1" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y4z1.c",
  "north" : DIR+"/rooms/x11y5z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
