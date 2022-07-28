inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 8, 6 }));
  set_short( "Passage - x38y8z6" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y8z6.c",
  "east" : DIR+"/rooms/x39y8z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
