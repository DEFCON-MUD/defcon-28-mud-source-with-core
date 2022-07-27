inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 38, 2 }));
  set_short( "Passage - x22y38z2" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y38z2.c",
  "east" : DIR+"/rooms/x23y38z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
