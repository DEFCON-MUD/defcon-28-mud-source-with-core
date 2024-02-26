inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 4 }));
  set_short( "Passage - x29y22z4" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y23z4.c",
  "south" : DIR+"/rooms/x29y21z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
