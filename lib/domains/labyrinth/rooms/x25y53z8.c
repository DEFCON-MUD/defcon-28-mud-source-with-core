inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 53, 8 }));
  set_short( "Corridor - x25y53z8" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y54z8.c",
  "south" : DIR+"/rooms/x25y52z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
