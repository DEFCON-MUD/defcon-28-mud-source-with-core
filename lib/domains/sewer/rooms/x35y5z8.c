inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 5, 8 }));
  set_short( "Passage - x35y5z8" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y6z8.c",
  "south" : DIR+"/rooms/x35y4z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
