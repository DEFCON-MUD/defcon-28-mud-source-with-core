inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 5 }));
  set_short( "Passage - x55y41z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z5.c",
  "south" : DIR+"/rooms/x55y40z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
