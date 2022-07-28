inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 0, 9 }));
  set_short( "Passage - x60y0z9" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y0z9.c",
  "east" : DIR+"/rooms/x61y0z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
