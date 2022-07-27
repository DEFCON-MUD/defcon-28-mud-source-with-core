inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 3 }));
  set_short( "Corridor - x29y64z3" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z3.c",
  "east" : DIR+"/rooms/x30y64z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
