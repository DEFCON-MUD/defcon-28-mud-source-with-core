inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 39, 8 }));
  set_short( "Passage - x43y39z8" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y40z8.c",
  "south" : DIR+"/rooms/x43y38z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
