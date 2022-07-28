inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 53, 2 }));
  set_short( "Passage - x37y53z2" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y54z2.c",
  "south" : DIR+"/rooms/x37y52z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
