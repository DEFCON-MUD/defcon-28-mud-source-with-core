inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 62, 3 }));
  set_short( "Passage - x4y62z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y62z3.c",
  "east" : DIR+"/rooms/x5y62z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
