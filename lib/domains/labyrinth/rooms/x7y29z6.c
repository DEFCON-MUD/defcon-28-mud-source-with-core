inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 29, 6 }));
  set_short( "Hallway - x7y29z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y30z6.c",
  "south" : DIR+"/rooms/x7y28z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
