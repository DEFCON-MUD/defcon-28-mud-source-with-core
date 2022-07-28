inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 5 }));
  set_short( "Corridor - x5y4z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y4z5.c",
  "south" : DIR+"/rooms/x5y3z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
