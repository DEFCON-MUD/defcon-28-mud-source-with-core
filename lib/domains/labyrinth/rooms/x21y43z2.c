inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 2 }));
  set_short( "Passage - x21y43z2" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z2.c",
  "south" : DIR+"/rooms/x21y42z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
