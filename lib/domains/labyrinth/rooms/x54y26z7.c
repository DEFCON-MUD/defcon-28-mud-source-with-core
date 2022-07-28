inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 26, 7 }));
  set_short( "Passage - x54y26z7" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y26z7.c",
  "east" : DIR+"/rooms/x55y26z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
