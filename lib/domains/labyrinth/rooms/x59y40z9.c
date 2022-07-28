inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 9 }));
  set_short( "Passage - x59y40z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y40z9.c",
  "south" : DIR+"/rooms/x59y39z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
