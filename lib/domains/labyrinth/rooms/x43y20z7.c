inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 20, 7 }));
  set_short( "Passage - x43y20z7" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y20z7.c",
  "north" : DIR+"/rooms/x43y21z7.c",
  "south" : DIR+"/rooms/x43y19z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
