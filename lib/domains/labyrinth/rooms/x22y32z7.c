inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 32, 7 }));
  set_short( "Passage - x22y32z7" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y32z7.c",
  "east" : DIR+"/rooms/x23y32z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
