inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 8 }));
  set_short( "Passage - x23y33z8" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z8.c",
  "south" : DIR+"/rooms/x23y32z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
