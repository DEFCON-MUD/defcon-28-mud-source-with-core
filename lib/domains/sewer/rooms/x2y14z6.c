inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 14, 6 }));
  set_short( "Hallway - x2y14z6" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y14z6.c",
  "east" : DIR+"/rooms/x3y14z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
