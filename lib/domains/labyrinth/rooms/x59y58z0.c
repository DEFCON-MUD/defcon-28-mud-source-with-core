inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 0 }));
  set_short( "Passage - x59y58z0" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y58z0.c",
  "south" : DIR+"/rooms/x59y57z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
