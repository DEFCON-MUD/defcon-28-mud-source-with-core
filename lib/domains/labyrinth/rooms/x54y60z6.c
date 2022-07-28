inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 60, 6 }));
  set_short( "Passage - x54y60z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y60z6.c",
  "east" : DIR+"/rooms/x55y60z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
