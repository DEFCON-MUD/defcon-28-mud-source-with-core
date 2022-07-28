inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 32, 3 }));
  set_short( "Corridor - x60y32z3" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y32z3.c",
  "east" : DIR+"/rooms/x61y32z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
