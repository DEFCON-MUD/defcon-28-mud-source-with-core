inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 5, 0 }));
  set_short( "Passage - x37y5z0" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y6z0.c",
  "south" : DIR+"/rooms/x37y4z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
