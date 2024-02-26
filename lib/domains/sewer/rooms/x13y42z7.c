inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 42, 7 }));
  set_short( "Hallway - x13y42z7" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y42z7.c",
  "east" : DIR+"/rooms/x14y42z7.c",
  "north" : DIR+"/rooms/x13y43z7.c",
  "south" : DIR+"/rooms/x13y41z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
