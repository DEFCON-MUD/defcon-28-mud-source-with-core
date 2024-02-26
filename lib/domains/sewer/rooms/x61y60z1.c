inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 60, 1 }));
  set_short( "Corridor - x61y60z1" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y60z1.c",
  "north" : DIR+"/rooms/x61y61z1.c",
  "south" : DIR+"/rooms/x61y59z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
