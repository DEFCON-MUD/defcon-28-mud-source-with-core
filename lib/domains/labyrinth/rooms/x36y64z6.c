inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 64, 6 }));
  set_short( "Passage - x36y64z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y64z6.c",
  "east" : DIR+"/rooms/x37y64z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
