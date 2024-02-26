inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 48, 8 }));
  set_short( "Passage - x22y48z8" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y48z8.c",
  "east" : DIR+"/rooms/x23y48z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
