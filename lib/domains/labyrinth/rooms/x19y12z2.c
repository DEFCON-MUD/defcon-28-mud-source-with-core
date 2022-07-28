inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 2 }));
  set_short( "Hallway - x19y12z2" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y12z2.c",
  "south" : DIR+"/rooms/x19y11z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
