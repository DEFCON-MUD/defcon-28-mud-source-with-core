inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 59, 6 }));
  set_short( "Hallway - x27y59z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y60z6.c",
  "south" : DIR+"/rooms/x27y58z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
