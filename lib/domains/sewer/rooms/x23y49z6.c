inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 49, 6 }));
  set_short( "Hallway - x23y49z6" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y50z6.c",
  "south" : DIR+"/rooms/x23y48z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
