inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 3 }));
  set_short( "Corridor - x45y14z3" );
set_objects( DIR+"/monsters/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y14z3.c",
  "north" : DIR+"/rooms/x45y15z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
