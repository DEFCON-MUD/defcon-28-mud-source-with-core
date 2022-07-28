inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 6 }));
  set_short( "Passage - x53y50z6" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y50z6.c",
  "north" : DIR+"/rooms/x53y51z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
