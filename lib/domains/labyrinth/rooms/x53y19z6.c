inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 19, 6 }));
  set_short( "Passage - x53y19z6" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y20z6.c",
  "south" : DIR+"/rooms/x53y18z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
