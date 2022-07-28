inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 0, 7 }));
  set_short( "Passage - x40y0z7" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y0z7.c",
  "east" : DIR+"/rooms/x41y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
