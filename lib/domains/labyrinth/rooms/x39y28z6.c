inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 6 }));
  set_short( "Hallway - x39y28z6" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y28z6.c",
  "north" : DIR+"/rooms/x39y29z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
