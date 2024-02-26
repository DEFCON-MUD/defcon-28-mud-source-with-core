inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 33, 9 }));
  set_short( "Passage - x53y33z9" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y34z9.c",
  "south" : DIR+"/rooms/x53y32z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
