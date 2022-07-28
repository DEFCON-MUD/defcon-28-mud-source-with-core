inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 55, 1 }));
  set_short( "Corridor - x35y55z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y56z1.c",
  "south" : DIR+"/rooms/x35y54z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
