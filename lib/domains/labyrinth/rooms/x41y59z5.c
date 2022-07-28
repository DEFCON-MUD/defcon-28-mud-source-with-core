inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 59, 5 }));
  set_short( "Corridor - x41y59z5" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y60z5.c",
  "south" : DIR+"/rooms/x41y58z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
