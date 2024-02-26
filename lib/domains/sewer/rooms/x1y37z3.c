inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 37, 3 }));
  set_short( "Hallway - x1y37z3" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y38z3.c",
  "south" : DIR+"/rooms/x1y36z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
