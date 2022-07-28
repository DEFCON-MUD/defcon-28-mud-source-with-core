inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 11, 1 }));
  set_short( "Passage - x39y11z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y12z1.c",
  "south" : DIR+"/rooms/x39y10z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
