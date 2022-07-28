inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 60, 9 }));
  set_short( "Corridor - x51y60z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y61z9.c",
  "south" : DIR+"/rooms/x51y59z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
