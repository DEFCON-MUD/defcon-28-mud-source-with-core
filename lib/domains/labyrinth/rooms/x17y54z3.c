inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 3 }));
  set_short( "Passage - x17y54z3" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y54z3.c",
  "north" : DIR+"/rooms/x17y55z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
