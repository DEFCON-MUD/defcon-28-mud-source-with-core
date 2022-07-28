inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 49, 5 }));
  set_short( "Passage - x59y49z5" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y50z5.c",
  "south" : DIR+"/rooms/x59y48z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
