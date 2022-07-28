inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 62, 3 }));
  set_short( "Hallway - x48y62z3" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y62z3.c",
  "east" : DIR+"/rooms/x49y62z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
