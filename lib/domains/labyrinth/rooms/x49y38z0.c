inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 38, 0 }));
  set_short( "Passage - x49y38z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y38z0.c",
  "south" : DIR+"/rooms/x49y37z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
