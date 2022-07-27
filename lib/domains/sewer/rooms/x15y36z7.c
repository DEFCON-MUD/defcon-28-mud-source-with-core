inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 7 }));
  set_short( "Corridor - x15y36z7" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y36z7.c",
  "east" : DIR+"/rooms/x16y36z7.c",
  "north" : DIR+"/rooms/x15y37z7.c",
  "south" : DIR+"/rooms/x15y35z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
