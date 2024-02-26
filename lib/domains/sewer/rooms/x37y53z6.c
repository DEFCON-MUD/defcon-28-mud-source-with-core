inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 53, 6 }));
  set_short( "Passage - x37y53z6" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y54z6.c",
  "south" : DIR+"/rooms/x37y52z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
