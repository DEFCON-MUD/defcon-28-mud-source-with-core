inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 64, 3 }));
  set_short( "Hallway - x48y64z3" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y64z3.c",
  "east" : DIR+"/rooms/x49y64z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
