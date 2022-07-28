inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 9 }));
  set_short( "Hallway - x51y46z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y46z9.c",
  "south" : DIR+"/rooms/x51y45z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
