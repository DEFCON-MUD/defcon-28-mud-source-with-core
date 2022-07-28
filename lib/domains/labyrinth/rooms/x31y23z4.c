inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 23, 4 }));
  set_short( "Passage - x31y23z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y24z4.c",
  "south" : DIR+"/rooms/x31y22z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
