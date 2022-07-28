inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 8 }));
  set_short( "Corridor - x17y20z8" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y20z8.c",
  "south" : DIR+"/rooms/x17y19z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
