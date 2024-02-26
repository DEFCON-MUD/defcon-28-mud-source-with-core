inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 2, 0 }));
  set_short( "Passage - x4y2z0" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y2z0.c",
  "east" : DIR+"/rooms/x5y2z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
