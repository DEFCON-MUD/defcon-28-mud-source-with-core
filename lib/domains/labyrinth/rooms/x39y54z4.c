inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 4 }));
  set_short( "Hallway - x39y54z4" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y54z4.c",
  "north" : DIR+"/rooms/x39y55z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
