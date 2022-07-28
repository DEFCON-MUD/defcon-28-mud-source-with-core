inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 7 }));
  set_short( "Hallway - x11y8z7" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z7.c",
  "east" : DIR+"/rooms/x12y8z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
