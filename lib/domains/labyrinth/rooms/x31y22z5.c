inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 5 }));
  set_short( "Passage - x31y22z5" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y22z5.c",
  "east" : DIR+"/rooms/x32y22z5.c",
  "south" : DIR+"/rooms/x31y21z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
