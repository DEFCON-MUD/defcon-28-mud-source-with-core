inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 9 }));
  set_short( "Corridor - x45y12z9" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y12z9.c",
  "north" : DIR+"/rooms/x45y13z9.c",
  "south" : DIR+"/rooms/x45y11z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
