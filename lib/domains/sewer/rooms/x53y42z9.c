inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 9 }));
  set_short( "Hallway - x53y42z9" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y42z9.c",
  "south" : DIR+"/rooms/x53y41z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
