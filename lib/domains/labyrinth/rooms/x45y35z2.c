inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 35, 2 }));
  set_short( "Passage - x45y35z2" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y36z2.c",
  "south" : DIR+"/rooms/x45y34z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
