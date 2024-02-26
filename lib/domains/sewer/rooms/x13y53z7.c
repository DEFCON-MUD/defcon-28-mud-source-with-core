inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 53, 7 }));
  set_short( "Passage - x13y53z7" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y54z7.c",
  "south" : DIR+"/rooms/x13y52z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
