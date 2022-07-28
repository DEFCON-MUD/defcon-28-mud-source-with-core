inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 8 }));
  set_short( "Hallway - x35y36z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y37z8.c",
  "south" : DIR+"/rooms/x35y35z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
