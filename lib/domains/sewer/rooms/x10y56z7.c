inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 56, 7 }));
  set_short( "Hallway - x10y56z7" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y56z7.c",
  "east" : DIR+"/rooms/x11y56z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
