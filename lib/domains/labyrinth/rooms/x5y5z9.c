inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 5, 9 }));
  set_short( "Corridor - x5y5z9" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y6z9.c",
  "south" : DIR+"/rooms/x5y4z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
