inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 7 }));
  set_short( "Hallway - x13y36z7" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y36z7.c",
  "south" : DIR+"/rooms/x13y35z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
