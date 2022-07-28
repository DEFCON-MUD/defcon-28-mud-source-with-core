inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 8 }));
  set_short( "Corridor - x25y36z8" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y36z8.c",
  "south" : DIR+"/rooms/x25y35z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
