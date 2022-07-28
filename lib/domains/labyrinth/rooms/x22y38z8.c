inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 38, 8 }));
  set_short( "Hallway - x22y38z8" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y38z8.c",
  "east" : DIR+"/rooms/x23y38z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
