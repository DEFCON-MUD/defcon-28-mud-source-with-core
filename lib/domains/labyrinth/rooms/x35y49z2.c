inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 49, 2 }));
  set_short( "Corridor - x35y49z2" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y50z2.c",
  "south" : DIR+"/rooms/x35y48z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
