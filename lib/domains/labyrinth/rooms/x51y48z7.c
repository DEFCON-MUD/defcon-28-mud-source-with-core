inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 7 }));
  set_short( "Corridor - x51y48z7" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y48z7.c",
  "north" : DIR+"/rooms/x51y49z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
