inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 6 }));
  set_short( "Corridor - x33y26z6" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y26z6.c",
  "north" : DIR+"/rooms/x33y27z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
