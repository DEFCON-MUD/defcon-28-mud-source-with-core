inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 10, 3 }));
  set_short( "Corridor - x12y10z3" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y10z3.c",
  "east" : DIR+"/rooms/x13y10z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
