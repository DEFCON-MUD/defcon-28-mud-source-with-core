inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 47, 4 }));
  set_short( "Passage - x53y47z4" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y48z4.c",
  "south" : DIR+"/rooms/x53y46z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
