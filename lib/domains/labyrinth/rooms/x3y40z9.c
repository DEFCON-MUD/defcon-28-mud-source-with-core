inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 9 }));
  set_short( "Passage - x3y40z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y40z9.c",
  "south" : DIR+"/rooms/x3y39z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
