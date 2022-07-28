inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 3 }));
  set_short( "Passage - x45y16z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y16z3.c",
  "south" : DIR+"/rooms/x45y15z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
