inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 9 }));
  set_short( "Passage - x55y52z9" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y52z9.c",
  "north" : DIR+"/rooms/x55y53z9.c",
  "south" : DIR+"/rooms/x55y51z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
