inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 35, 6 }));
  set_short( "Passage - x57y35z6" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y36z6.c",
  "south" : DIR+"/rooms/x57y34z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
