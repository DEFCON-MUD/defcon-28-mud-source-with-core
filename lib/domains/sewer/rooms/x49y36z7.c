inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 36, 7 }));
  set_short( "Passage - x49y36z7" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y36z7.c",
  "north" : DIR+"/rooms/x49y37z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
