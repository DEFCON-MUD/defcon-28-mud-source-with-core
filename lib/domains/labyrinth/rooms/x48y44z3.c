inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 44, 3 }));
  set_short( "Corridor - x48y44z3" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y44z3.c",
  "east" : DIR+"/rooms/x49y44z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
