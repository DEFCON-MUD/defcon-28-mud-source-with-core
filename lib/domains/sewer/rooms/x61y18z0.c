inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 18, 0 }));
  set_short( "Corridor - x61y18z0" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y19z0.c",
  "south" : DIR+"/rooms/x61y17z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
