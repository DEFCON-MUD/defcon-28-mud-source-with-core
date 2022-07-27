inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 36, 3 }));
  set_short( "Passage - x52y36z3" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y36z3.c",
  "east" : DIR+"/rooms/x53y36z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
