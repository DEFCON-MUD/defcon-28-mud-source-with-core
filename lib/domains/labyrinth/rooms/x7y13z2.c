inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 13, 2 }));
  set_short( "Hallway - x7y13z2" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y14z2.c",
  "south" : DIR+"/rooms/x7y12z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
