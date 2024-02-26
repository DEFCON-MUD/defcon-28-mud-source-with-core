inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 64, 6 }));
  set_short( "Passage - x6y64z6" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y64z6.c",
  "east" : DIR+"/rooms/x7y64z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
