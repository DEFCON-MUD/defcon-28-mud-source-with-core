inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 14, 1 }));
  set_short( "Passage - x14y14z1" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y14z1.c",
  "east" : DIR+"/rooms/x15y14z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
