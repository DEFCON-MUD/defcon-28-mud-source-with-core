inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 24, 4 }));
  set_short( "Passage - x57y24z4" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y24z4.c",
  "north" : DIR+"/rooms/x57y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
