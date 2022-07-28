inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 26, 9 }));
  set_short( "Hallway - x5y26z9" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y26z9.c",
  "east" : DIR+"/rooms/x6y26z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
