inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 64, 6 }));
  set_short( "Hallway - x42y64z6" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y64z6.c",
  "east" : DIR+"/rooms/x43y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
