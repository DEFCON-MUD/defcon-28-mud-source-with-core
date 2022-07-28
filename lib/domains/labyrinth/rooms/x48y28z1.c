inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 28, 1 }));
  set_short( "Hallway - x48y28z1" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y28z1.c",
  "east" : DIR+"/rooms/x49y28z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
