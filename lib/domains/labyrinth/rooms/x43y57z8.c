inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 57, 8 }));
  set_short( "Passage - x43y57z8" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y58z8.c",
  "south" : DIR+"/rooms/x43y56z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
