inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 64, 6 }));
  set_short( "Passage - x41y64z6" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y64z6.c",
  "east" : DIR+"/rooms/x42y64z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
