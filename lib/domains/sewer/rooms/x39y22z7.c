inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 22, 7 }));
  set_short( "Hallway - x39y22z7" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y22z7.c",
  "south" : DIR+"/rooms/x39y21z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
