inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 38, 6 }));
  set_short( "Hallway - x49y38z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y39z6.c",
  "south" : DIR+"/rooms/x49y37z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
