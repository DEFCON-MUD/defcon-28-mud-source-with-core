inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 6 }));
  set_short( "Corridor - x61y38z6" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y39z6.c",
  "south" : DIR+"/rooms/x61y37z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
