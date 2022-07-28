inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 28, 8 }));
  set_short( "Passage - x49y28z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y29z8.c",
  "south" : DIR+"/rooms/x49y27z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
