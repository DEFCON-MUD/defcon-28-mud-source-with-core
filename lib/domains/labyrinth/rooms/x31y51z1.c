inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 51, 1 }));
  set_short( "Passage - x31y51z1" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y52z1.c",
  "south" : DIR+"/rooms/x31y50z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
