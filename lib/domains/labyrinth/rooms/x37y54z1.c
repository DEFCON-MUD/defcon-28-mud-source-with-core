inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 54, 1 }));
  set_short( "Hallway - x37y54z1" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y54z1.c",
  "south" : DIR+"/rooms/x37y53z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
