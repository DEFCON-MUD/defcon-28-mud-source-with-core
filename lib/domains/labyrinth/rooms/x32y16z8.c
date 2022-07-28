inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 16, 8 }));
  set_short( "Corridor - x32y16z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y16z8.c",
  "east" : DIR+"/rooms/x33y16z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
