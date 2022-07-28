inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 2 }));
  set_short( "Hallway - x29y28z2" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z2.c",
  "north" : DIR+"/rooms/x29y29z2.c",
  "south" : DIR+"/rooms/x29y27z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
