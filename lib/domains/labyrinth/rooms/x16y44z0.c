inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 44, 0 }));
  set_short( "Corridor - x16y44z0" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y44z0.c",
  "east" : DIR+"/rooms/x17y44z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
