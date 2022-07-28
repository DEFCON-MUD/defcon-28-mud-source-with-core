inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 2 }));
  set_short( "Corridor - x23y16z2" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y16z2.c",
  "north" : DIR+"/rooms/x23y17z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
