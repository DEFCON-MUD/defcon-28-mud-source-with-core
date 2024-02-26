inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 33, 9 }));
  set_short( "Hallway - x21y33z9" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y34z9.c",
  "south" : DIR+"/rooms/x21y32z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
