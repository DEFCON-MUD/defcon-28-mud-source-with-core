inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 54, 5 }));
  set_short( "Hallway - x54y54z5" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y54z5.c",
  "east" : DIR+"/rooms/x55y54z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
