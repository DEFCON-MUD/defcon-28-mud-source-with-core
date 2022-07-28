inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 44, 7 }));
  set_short( "Passage - x54y44z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y44z7.c",
  "east" : DIR+"/rooms/x55y44z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
