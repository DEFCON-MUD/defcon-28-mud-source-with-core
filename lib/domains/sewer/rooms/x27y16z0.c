inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 16, 0 }));
  set_short( "Passage - x27y16z0" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y17z0.c",
  "south" : DIR+"/rooms/x27y15z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
