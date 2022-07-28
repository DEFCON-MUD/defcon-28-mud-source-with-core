inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 27, 9 }));
  set_short( "Passage - x47y27z9" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y28z9.c",
  "south" : DIR+"/rooms/x47y26z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
