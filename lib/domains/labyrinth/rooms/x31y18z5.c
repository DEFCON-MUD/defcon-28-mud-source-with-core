inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 18, 5 }));
  set_short( "Hallway - x31y18z5" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y18z5.c",
  "south" : DIR+"/rooms/x31y17z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
