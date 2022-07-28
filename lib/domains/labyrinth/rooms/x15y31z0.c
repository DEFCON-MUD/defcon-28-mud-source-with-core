inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 31, 0 }));
  set_short( "Passage - x15y31z0" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y32z0.c",
  "south" : DIR+"/rooms/x15y30z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
