inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 3, 7 }));
  set_short( "Corridor - x15y3z7" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y4z7.c",
  "south" : DIR+"/rooms/x15y2z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
