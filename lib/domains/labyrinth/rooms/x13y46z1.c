inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 46, 1 }));
  set_short( "Passage - x13y46z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y47z1.c",
  "south" : DIR+"/rooms/x13y45z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
