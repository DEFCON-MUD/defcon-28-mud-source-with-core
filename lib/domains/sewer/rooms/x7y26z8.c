inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 26, 8 }));
  set_short( "Corridor - x7y26z8" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y26z8.c",
  "north" : DIR+"/rooms/x7y27z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
