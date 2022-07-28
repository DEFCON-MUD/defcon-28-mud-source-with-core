inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 15, 2 }));
  set_short( "Passage - x31y15z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y16z2.c",
  "south" : DIR+"/rooms/x31y14z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
