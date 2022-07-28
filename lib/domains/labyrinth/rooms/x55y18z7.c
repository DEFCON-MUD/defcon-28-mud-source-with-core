inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 18, 7 }));
  set_short( "Corridor - x55y18z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y18z7.c",
  "south" : DIR+"/rooms/x55y17z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
