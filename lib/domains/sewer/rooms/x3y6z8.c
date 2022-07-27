inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 6, 8 }));
  set_short( "Passage - x3y6z8" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y6z8.c",
  "south" : DIR+"/rooms/x3y5z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
