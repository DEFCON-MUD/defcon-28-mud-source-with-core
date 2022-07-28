inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 0, 3 }));
  set_short( "Corridor - x12y0z3" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y0z3.c",
  "east" : DIR+"/rooms/x13y0z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
