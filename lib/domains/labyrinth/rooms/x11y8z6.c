inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 8, 6 }));
  set_short( "Passage - x11y8z6" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y8z6.c",
  "east" : DIR+"/rooms/x12y8z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
