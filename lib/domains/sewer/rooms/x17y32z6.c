inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 6 }));
  set_short( "Corridor - x17y32z6" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y33z6.c",
  "south" : DIR+"/rooms/x17y31z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
