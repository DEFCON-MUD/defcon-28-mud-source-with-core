inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 34, 1 }));
  set_short( "Corridor - x60y34z1" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y34z1.c",
  "east" : DIR+"/rooms/x61y34z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
