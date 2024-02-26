inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 14, 5 }));
  set_short( "Passage - x22y14z5" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y14z5.c",
  "east" : DIR+"/rooms/x23y14z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
