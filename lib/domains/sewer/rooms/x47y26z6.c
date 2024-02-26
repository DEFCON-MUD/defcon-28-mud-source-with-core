inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 6 }));
  set_short( "Corridor - x47y26z6" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y26z6.c",
  "north" : DIR+"/rooms/x47y27z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
