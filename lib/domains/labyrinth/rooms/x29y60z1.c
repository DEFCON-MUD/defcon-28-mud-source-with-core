inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 1 }));
  set_short( "Corridor - x29y60z1" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y60z1.c",
  "north" : DIR+"/rooms/x29y61z1.c",
  "south" : DIR+"/rooms/x29y59z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
