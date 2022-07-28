inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 46, 1 }));
  set_short( "Corridor - x60y46z1" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y46z1.c",
  "east" : DIR+"/rooms/x61y46z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
