inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 8 }));
  set_short( "Passage - x37y26z8" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y26z8.c",
  "north" : DIR+"/rooms/x37y27z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
