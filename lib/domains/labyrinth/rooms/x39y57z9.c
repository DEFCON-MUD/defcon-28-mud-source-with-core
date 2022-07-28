inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 57, 9 }));
  set_short( "Passage - x39y57z9" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y58z9.c",
  "south" : DIR+"/rooms/x39y56z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
