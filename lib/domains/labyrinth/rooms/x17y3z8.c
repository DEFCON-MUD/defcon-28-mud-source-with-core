inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 3, 8 }));
  set_short( "Corridor - x17y3z8" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y4z8.c",
  "south" : DIR+"/rooms/x17y2z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
