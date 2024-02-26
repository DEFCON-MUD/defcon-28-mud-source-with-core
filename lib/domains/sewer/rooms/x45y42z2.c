inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 42, 2 }));
  set_short( "Passage - x45y42z2" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y42z2.c",
  "east" : DIR+"/rooms/x46y42z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
