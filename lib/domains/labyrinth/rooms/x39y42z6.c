inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 6 }));
  set_short( "Corridor - x39y42z6" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y43z6.c",
  "south" : DIR+"/rooms/x39y41z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
