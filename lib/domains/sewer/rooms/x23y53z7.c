inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 53, 7 }));
  set_short( "Passage - x23y53z7" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y54z7.c",
  "south" : DIR+"/rooms/x23y52z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
