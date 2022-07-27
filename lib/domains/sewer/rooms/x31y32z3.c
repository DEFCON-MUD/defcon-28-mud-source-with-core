inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 32, 3 }));
  set_short( "Corridor - x31y32z3" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y32z3.c",
  "north" : DIR+"/rooms/x31y33z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
