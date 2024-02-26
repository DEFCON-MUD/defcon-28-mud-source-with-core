inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 20, 2 }));
  set_short( "Hallway - x18y20z2" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y20z2.c",
  "east" : DIR+"/rooms/x19y20z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
