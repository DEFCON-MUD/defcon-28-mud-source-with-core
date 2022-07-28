inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 26, 0 }));
  set_short( "Corridor - x61y26z0" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y26z0.c",
  "north" : DIR+"/rooms/x61y27z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
