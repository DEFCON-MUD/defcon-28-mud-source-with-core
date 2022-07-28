inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 6, 5 }));
  set_short( "Passage - x24y6z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y6z5.c",
  "east" : DIR+"/rooms/x25y6z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
