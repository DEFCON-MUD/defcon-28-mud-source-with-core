inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 5 }));
  set_short( "Passage - x37y22z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y22z5.c",
  "east" : DIR+"/rooms/x38y22z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
