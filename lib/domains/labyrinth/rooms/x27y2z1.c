inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 1 }));
  set_short( "Passage - x27y2z1" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y2z1.c",
  "east" : DIR+"/rooms/x28y2z1.c",
  "north" : DIR+"/rooms/x27y3z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
