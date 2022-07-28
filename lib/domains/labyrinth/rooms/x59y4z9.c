inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 4, 9 }));
  set_short( "Corridor - x59y4z9" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y4z9.c",
  "south" : DIR+"/rooms/x59y3z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
