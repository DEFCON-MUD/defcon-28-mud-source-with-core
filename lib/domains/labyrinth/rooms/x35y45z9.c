inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 45, 9 }));
  set_short( "Passage - x35y45z9" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y46z9.c",
  "south" : DIR+"/rooms/x35y44z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
