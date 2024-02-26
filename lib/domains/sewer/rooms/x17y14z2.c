inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 14, 2 }));
  set_short( "Passage - x17y14z2" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y14z2.c",
  "east" : DIR+"/rooms/x18y14z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
