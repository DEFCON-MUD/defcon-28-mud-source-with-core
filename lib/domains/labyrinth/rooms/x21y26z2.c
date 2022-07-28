inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 26, 2 }));
  set_short( "Corridor - x21y26z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "south" : DIR+"/rooms/x21y25z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
