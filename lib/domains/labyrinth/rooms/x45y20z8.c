inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 8 }));
  set_short( "Passage - x45y20z8" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y20z8.c",
  "east" : DIR+"/rooms/x46y20z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
