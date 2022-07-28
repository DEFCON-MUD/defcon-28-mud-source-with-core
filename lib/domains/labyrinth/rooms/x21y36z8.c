inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 36, 8 }));
  set_short( "Corridor - x21y36z8" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y36z8.c",
  "north" : DIR+"/rooms/x21y37z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
