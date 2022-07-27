inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 58, 3 }));
  set_short( "Passage - x32y58z3" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y58z3.c",
  "east" : DIR+"/rooms/x33y58z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
