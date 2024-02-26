inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 8, 8 }));
  set_short( "Corridor - x24y8z8" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y8z8.c",
  "east" : DIR+"/rooms/x25y8z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
