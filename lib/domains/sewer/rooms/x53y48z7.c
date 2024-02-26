inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 7 }));
  set_short( "Corridor - x53y48z7" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y48z7.c",
  "south" : DIR+"/rooms/x53y47z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
