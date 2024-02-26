inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 3 }));
  set_short( "Corridor - x9y46z3" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y46z3.c",
  "east" : DIR+"/rooms/x10y46z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
