inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 46, 0 }));
  set_short( "Passage - x29y46z0" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y47z0.c",
  "south" : DIR+"/rooms/x29y45z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
