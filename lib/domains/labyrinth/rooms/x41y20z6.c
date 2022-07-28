inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 6 }));
  set_short( "Corridor - x41y20z6" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z6.c",
  "north" : DIR+"/rooms/x41y21z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
