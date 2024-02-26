inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 3 }));
  set_short( "Corridor - x49y30z3" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y30z3.c",
  "east" : DIR+"/rooms/x50y30z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
