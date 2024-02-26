inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 6 }));
  set_short( "Passage - x57y34z6" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y34z6.c",
  "north" : DIR+"/rooms/x57y35z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
