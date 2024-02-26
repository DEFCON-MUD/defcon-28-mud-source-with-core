inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 49, 6 }));
  set_short( "Corridor - x15y49z6" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y50z6.c",
  "south" : DIR+"/rooms/x15y48z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
