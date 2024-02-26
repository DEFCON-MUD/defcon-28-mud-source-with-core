inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 41, 4 }));
  set_short( "Corridor - x13y41z4" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y42z4.c",
  "south" : DIR+"/rooms/x13y40z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
