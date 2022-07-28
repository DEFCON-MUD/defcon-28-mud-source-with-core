inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 10, 2 }));
  set_short( "Corridor - x34y10z2" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y10z2.c",
  "east" : DIR+"/rooms/x35y10z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
