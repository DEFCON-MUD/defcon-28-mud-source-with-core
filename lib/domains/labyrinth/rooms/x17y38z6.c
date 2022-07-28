inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 6 }));
  set_short( "Passage - x17y38z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y39z6.c",
  "south" : DIR+"/rooms/x17y37z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
