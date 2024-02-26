inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 62, 9 }));
  set_short( "Passage - x58y62z9" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y62z9.c",
  "east" : DIR+"/rooms/x59y62z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
