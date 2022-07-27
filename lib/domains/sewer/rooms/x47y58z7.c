inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 58, 7 }));
  set_short( "Passage - x47y58z7" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y58z7.c",
  "south" : DIR+"/rooms/x47y57z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
