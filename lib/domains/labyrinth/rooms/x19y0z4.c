inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 0, 4 }));
  set_short( "Hallway - x19y0z4" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y0z4.c",
  "east" : DIR+"/rooms/x20y0z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
