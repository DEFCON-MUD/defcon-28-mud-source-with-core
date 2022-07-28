inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 9 }));
  set_short( "Corridor - x47y48z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y48z9.c",
  "north" : DIR+"/rooms/x47y49z9.c",
  "south" : DIR+"/rooms/x47y47z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
