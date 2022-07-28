inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 2 }));
  set_short( "Hallway - x11y14z2" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y15z2.c",
  "south" : DIR+"/rooms/x11y13z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
