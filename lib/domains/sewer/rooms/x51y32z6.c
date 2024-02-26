inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 32, 6 }));
  set_short( "Corridor - x51y32z6" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y32z6.c",
  "south" : DIR+"/rooms/x51y31z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
