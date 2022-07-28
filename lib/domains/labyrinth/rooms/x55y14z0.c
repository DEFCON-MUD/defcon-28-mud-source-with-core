inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 0 }));
  set_short( "Corridor - x55y14z0" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y14z0.c",
  "south" : DIR+"/rooms/x55y13z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
