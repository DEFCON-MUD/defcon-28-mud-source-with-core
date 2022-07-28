inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 56, 9 }));
  set_short( "Hallway - x33y56z9" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y56z9.c",
  "north" : DIR+"/rooms/x33y57z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
