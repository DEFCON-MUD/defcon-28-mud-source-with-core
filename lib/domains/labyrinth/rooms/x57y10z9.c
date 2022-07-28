inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 10, 9 }));
  set_short( "Hallway - x57y10z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y10z9.c",
  "north" : DIR+"/rooms/x57y11z9.c",
  "south" : DIR+"/rooms/x57y9z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
