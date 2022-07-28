inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 0 }));
  set_short( "Hallway - x31y44z0" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y44z0.c",
  "east" : DIR+"/rooms/x32y44z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
