inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 62, 6 }));
  set_short( "Passage - x15y62z6" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y62z6.c",
  "south" : DIR+"/rooms/x15y61z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
