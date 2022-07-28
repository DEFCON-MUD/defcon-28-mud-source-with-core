inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 6, 1 }));
  set_short( "Hallway - x48y6z1" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y6z1.c",
  "east" : DIR+"/rooms/x49y6z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
