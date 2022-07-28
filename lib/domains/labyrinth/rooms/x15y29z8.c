inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 29, 8 }));
  set_short( "Passage - x15y29z8" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y30z8.c",
  "south" : DIR+"/rooms/x15y28z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
