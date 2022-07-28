inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 9 }));
  set_short( "Hallway - x40y64z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z9.c",
  "east" : DIR+"/rooms/x41y64z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
