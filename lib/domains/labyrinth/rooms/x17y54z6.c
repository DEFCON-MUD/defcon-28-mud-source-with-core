inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 6 }));
  set_short( "Corridor - x17y54z6" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y55z6.c",
  "south" : DIR+"/rooms/x17y53z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
