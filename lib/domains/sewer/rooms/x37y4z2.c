inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 4, 2 }));
  set_short( "Hallway - x37y4z2" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y4z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
