inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 30, 4 }));
  set_short( "Corridor - x46y30z4" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y30z4.c",
  "east" : DIR+"/rooms/x47y30z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
