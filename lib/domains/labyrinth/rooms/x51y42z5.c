inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 5 }));
  set_short( "Passage - x51y42z5" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y42z5.c",
  "north" : DIR+"/rooms/x51y43z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
