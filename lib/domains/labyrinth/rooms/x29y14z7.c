inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 7 }));
  set_short( "Hallway - x29y14z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y15z7.c",
  "south" : DIR+"/rooms/x29y13z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
