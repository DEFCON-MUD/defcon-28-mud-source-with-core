inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 5 }));
  set_short( "Corridor - x49y50z5" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y50z5.c",
  "east" : DIR+"/rooms/x50y50z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
