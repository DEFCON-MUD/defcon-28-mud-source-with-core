inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 8 }));
  set_short( "Passage - x17y62z8" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y62z8.c",
  "east" : DIR+"/rooms/x18y62z8.c",
  "south" : DIR+"/rooms/x17y61z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
