inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 48, 8 }));
  set_short( "Passage - x28y48z8" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y48z8.c",
  "east" : DIR+"/rooms/x29y48z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
