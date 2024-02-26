inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 64, 6 }));
  set_short( "Passage - x22y64z6" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y64z6.c",
  "east" : DIR+"/rooms/x23y64z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
