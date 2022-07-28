inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 26, 6 }));
  set_short( "Hallway - x27y26z6" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y26z6.c",
  "east" : DIR+"/rooms/x28y26z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
