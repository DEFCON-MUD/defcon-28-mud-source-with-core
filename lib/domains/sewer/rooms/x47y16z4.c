inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 4 }));
  set_short( "Corridor - x47y16z4" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y16z4.c",
  "north" : DIR+"/rooms/x47y17z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
