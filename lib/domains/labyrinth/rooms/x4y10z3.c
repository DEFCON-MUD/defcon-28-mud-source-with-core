inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 10, 3 }));
  set_short( "Hallway - x4y10z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y10z3.c",
  "east" : DIR+"/rooms/x5y10z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
