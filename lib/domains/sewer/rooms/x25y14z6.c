inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 6 }));
  set_short( "Passage - x25y14z6" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y14z6.c",
  "east" : DIR+"/rooms/x26y14z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
