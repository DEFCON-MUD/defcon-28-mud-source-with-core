inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 0 }));
  set_short( "Passage - x53y36z0" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y37z0.c",
  "south" : DIR+"/rooms/x53y35z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
