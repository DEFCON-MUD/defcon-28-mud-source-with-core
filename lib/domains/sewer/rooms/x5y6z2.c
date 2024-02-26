inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 2 }));
  set_short( "Corridor - x5y6z2" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y6z2.c",
  "north" : DIR+"/rooms/x5y7z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
