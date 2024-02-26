inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 2 }));
  set_short( "Hallway - x59y24z2" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y24z2.c",
  "east" : DIR+"/rooms/x60y24z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
