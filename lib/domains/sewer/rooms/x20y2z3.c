inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 2, 3 }));
  set_short( "Hallway - x20y2z3" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y2z3.c",
  "east" : DIR+"/rooms/x21y2z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
