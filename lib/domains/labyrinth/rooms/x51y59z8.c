inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 59, 8 }));
  set_short( "Passage - x51y59z8" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y60z8.c",
  "south" : DIR+"/rooms/x51y58z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
