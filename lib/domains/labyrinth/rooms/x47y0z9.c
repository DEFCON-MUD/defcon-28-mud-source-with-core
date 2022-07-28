inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 0, 9 }));
  set_short( "Passage - x47y0z9" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y0z9.c",
  "east" : DIR+"/rooms/x48y0z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
