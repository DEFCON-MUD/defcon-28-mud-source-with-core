inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 3 }));
  set_short( "Corridor - x31y42z3" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y42z3.c",
  "north" : DIR+"/rooms/x31y43z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
