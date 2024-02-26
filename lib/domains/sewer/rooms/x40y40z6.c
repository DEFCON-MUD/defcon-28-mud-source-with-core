inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 40, 6 }));
  set_short( "Passage - x40y40z6" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y40z6.c",
  "east" : DIR+"/rooms/x41y40z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
