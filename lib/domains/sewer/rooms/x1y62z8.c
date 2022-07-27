inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 8 }));
  set_short( "Passage - x1y62z8" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z8.c",
  "south" : DIR+"/rooms/x1y61z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
