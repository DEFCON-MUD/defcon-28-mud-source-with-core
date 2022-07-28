inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 5, 9 }));
  set_short( "Hallway - x3y5z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y6z9.c",
  "south" : DIR+"/rooms/x3y4z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
