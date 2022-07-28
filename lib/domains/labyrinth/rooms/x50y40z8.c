inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 40, 8 }));
  set_short( "Passage - x50y40z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y40z8.c",
  "east" : DIR+"/rooms/x51y40z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
