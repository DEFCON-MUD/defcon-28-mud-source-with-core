inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 37, 6 }));
  set_short( "Hallway - x7y37z6" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y38z6.c",
  "south" : DIR+"/rooms/x7y36z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
