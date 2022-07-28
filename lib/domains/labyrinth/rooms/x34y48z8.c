inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 48, 8 }));
  set_short( "Hallway - x34y48z8" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y48z8.c",
  "east" : DIR+"/rooms/x35y48z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
