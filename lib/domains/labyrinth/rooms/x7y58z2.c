inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 58, 2 }));
  set_short( "Corridor - x7y58z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y59z2.c",
  "south" : DIR+"/rooms/x7y57z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
