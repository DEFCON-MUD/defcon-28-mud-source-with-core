inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 24, 3 }));
  set_short( "Corridor - x22y24z3" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y24z3.c",
  "east" : DIR+"/rooms/x23y24z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
