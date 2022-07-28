inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 48, 4 }));
  set_short( "Hallway - x60y48z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y48z4.c",
  "east" : DIR+"/rooms/x61y48z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
