inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 24, 4 }));
  set_short( "Passage - x5y24z4" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y25z4.c",
  "south" : DIR+"/rooms/x5y23z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
