inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 6 }));
  set_short( "Passage - x53y34z6" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y34z6.c",
  "south" : DIR+"/rooms/x53y33z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
