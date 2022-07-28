inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 17, 7 }));
  set_short( "Corridor - x21y17z7" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y18z7.c",
  "south" : DIR+"/rooms/x21y16z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
