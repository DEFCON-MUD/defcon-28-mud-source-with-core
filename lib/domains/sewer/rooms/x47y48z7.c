inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 48, 7 }));
  set_short( "Passage - x47y48z7" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y48z7.c",
  "north" : DIR+"/rooms/x47y49z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
