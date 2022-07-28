inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 26, 1 }));
  set_short( "Passage - x54y26z1" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y26z1.c",
  "east" : DIR+"/rooms/x55y26z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
