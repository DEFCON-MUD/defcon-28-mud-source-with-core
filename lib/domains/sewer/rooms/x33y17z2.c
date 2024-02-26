inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 17, 2 }));
  set_short( "Hallway - x33y17z2" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y18z2.c",
  "south" : DIR+"/rooms/x33y16z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
