inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 0, 3 }));
  set_short( "Hallway - x51y0z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y0z3.c",
  "east" : DIR+"/rooms/x52y0z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
