inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 9 }));
  set_short( "Corridor - x9y18z9" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y18z9.c",
  "east" : DIR+"/rooms/x10y18z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
