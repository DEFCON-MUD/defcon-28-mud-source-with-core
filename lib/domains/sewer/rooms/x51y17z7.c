inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 17, 7 }));
  set_short( "Passage - x51y17z7" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y18z7.c",
  "south" : DIR+"/rooms/x51y16z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
