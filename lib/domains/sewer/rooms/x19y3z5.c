inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 3, 5 }));
  set_short( "Corridor - x19y3z5" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y4z5.c",
  "south" : DIR+"/rooms/x19y2z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
