inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 5, 6 }));
  set_short( "Passage - x61y5z6" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y6z6.c",
  "south" : DIR+"/rooms/x61y4z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
