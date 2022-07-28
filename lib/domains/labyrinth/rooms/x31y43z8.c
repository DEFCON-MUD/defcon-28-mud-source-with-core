inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 8 }));
  set_short( "Hallway - x31y43z8" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z8.c",
  "south" : DIR+"/rooms/x31y42z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
