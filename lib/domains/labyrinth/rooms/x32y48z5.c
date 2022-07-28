inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 48, 5 }));
  set_short( "Hallway - x32y48z5" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y48z5.c",
  "east" : DIR+"/rooms/x33y48z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
