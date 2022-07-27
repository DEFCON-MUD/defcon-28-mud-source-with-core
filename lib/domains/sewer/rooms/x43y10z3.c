inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 3 }));
  set_short( "Passage - x43y10z3" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y10z3.c",
  "south" : DIR+"/rooms/x43y9z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
