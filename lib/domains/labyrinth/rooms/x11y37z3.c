inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 37, 3 }));
  set_short( "Hallway - x11y37z3" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y38z3.c",
  "south" : DIR+"/rooms/x11y36z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
