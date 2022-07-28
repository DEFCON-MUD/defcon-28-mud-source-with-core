inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 45, 2 }));
  set_short( "Corridor - x47y45z2" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y46z2.c",
  "south" : DIR+"/rooms/x47y44z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
