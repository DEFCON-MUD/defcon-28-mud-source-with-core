inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 60, 3 }));
  set_short( "Hallway - x3y60z3" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y60z3.c",
  "east" : DIR+"/rooms/x4y60z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
