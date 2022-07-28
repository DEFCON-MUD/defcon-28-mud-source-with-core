inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 39, 9 }));
  set_short( "Hallway - x51y39z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y40z9.c",
  "south" : DIR+"/rooms/x51y38z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
