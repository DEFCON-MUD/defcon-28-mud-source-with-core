inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 12, 6 }));
  set_short( "Corridor - x55y12z6" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y12z6.c",
  "south" : DIR+"/rooms/x55y11z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
