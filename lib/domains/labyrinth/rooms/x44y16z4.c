inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 16, 4 }));
  set_short( "Passage - x44y16z4" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y16z4.c",
  "east" : DIR+"/rooms/x45y16z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
