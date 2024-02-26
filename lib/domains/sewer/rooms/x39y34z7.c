inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 34, 7 }));
  set_short( "Passage - x39y34z7" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y34z7.c",
  "south" : DIR+"/rooms/x39y33z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
