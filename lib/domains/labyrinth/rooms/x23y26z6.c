inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 26, 6 }));
  set_short( "Hallway - x23y26z6" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y26z6.c",
  "north" : DIR+"/rooms/x23y27z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
