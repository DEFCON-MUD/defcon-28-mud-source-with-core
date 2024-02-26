inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 55, 9 }));
  set_short( "Passage - x3y55z9" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y56z9.c",
  "south" : DIR+"/rooms/x3y54z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
