inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 16, 3 }));
  set_short( "Passage - x42y16z3" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y16z3.c",
  "east" : DIR+"/rooms/x43y16z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
