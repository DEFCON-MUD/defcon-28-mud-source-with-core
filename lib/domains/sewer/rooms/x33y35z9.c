inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 35, 9 }));
  set_short( "Passage - x33y35z9" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y36z9.c",
  "south" : DIR+"/rooms/x33y34z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
