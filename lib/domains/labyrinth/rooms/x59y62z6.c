inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 62, 6 }));
  set_short( "Passage - x59y62z6" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y62z6.c",
  "south" : DIR+"/rooms/x59y61z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
