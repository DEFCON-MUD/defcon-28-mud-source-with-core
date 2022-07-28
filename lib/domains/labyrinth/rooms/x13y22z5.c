inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 5 }));
  set_short( "Corridor - x13y22z5" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z5.c",
  "east" : DIR+"/rooms/x14y22z5.c",
  "north" : DIR+"/rooms/x13y23z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
