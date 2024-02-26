inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 48, 7 }));
  set_short( "Passage - x9y48z7" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y48z7.c",
  "east" : DIR+"/rooms/x10y48z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
