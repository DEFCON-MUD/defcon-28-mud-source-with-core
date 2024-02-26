inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 58, 1 }));
  set_short( "Hallway - x1y58z1" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y58z1.c",
  "south" : DIR+"/rooms/x1y57z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
