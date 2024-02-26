inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 1 }));
  set_short( "Corridor - x45y12z1" );
set_objects( DIR+"/monsters/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y13z1.c",
  "south" : DIR+"/rooms/x45y11z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
