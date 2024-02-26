inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 3 }));
  set_short( "Hallway - x3y46z3" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y46z3.c",
  "east" : DIR+"/rooms/x4y46z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
