inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 2 }));
  set_short( "Passage - x47y34z2" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y35z2.c",
  "south" : DIR+"/rooms/x47y33z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
