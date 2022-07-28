inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 2 }));
  set_short( "Hallway - x57y12z2" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y12z2.c",
  "south" : DIR+"/rooms/x57y11z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
