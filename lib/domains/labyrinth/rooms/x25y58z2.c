inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 2 }));
  set_short( "Passage - x25y58z2" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y59z2.c",
  "south" : DIR+"/rooms/x25y57z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
