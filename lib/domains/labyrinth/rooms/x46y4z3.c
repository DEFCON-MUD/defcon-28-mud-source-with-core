inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 4, 3 }));
  set_short( "Passage - x46y4z3" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y4z3.c",
  "east" : DIR+"/rooms/x47y4z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
