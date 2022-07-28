inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 5, 0 }));
  set_short( "Passage - x59y5z0" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y6z0.c",
  "south" : DIR+"/rooms/x59y4z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
