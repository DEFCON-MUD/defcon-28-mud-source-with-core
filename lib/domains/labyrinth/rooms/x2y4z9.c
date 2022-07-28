inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 4, 9 }));
  set_short( "Passage - x2y4z9" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y4z9.c",
  "east" : DIR+"/rooms/x3y4z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
