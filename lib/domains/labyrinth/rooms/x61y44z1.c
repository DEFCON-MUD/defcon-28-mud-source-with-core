inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 44, 1 }));
  set_short( "Corridor - x61y44z1" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y44z1.c",
  "north" : DIR+"/rooms/x61y45z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
