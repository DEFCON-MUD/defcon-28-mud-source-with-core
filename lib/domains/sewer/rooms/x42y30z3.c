inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 30, 3 }));
  set_short( "Corridor - x42y30z3" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y30z3.c",
  "east" : DIR+"/rooms/x43y30z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
