inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 5 }));
  set_short( "Hallway - x55y38z5" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y38z5.c",
  "south" : DIR+"/rooms/x55y37z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
