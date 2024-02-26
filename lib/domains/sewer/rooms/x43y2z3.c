inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 3 }));
  set_short( "Corridor - x43y2z3" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y2z3.c",
  "north" : DIR+"/rooms/x43y3z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
