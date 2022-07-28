inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 57, 6 }));
  set_short( "Hallway - x31y57z6" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y58z6.c",
  "south" : DIR+"/rooms/x31y56z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
