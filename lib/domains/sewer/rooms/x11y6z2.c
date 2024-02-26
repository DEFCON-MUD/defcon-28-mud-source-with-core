inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 2 }));
  set_short( "Hallway - x11y6z2" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y6z2.c",
  "north" : DIR+"/rooms/x11y7z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
