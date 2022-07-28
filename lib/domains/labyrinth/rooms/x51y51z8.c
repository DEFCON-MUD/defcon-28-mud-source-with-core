inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 51, 8 }));
  set_short( "Passage - x51y51z8" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y52z8.c",
  "south" : DIR+"/rooms/x51y50z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
