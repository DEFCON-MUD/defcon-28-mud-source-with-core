inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 2, 3 }));
  set_short( "Passage - x58y2z3" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y2z3.c",
  "east" : DIR+"/rooms/x59y2z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
