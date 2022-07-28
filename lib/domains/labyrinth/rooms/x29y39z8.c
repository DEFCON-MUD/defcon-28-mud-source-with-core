inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 39, 8 }));
  set_short( "Corridor - x29y39z8" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y40z8.c",
  "south" : DIR+"/rooms/x29y38z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
