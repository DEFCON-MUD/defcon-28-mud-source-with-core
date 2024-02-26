inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 35, 0 }));
  set_short( "Corridor - x17y35z0" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y36z0.c",
  "south" : DIR+"/rooms/x17y34z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
