inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 47, 2 }));
  set_short( "Corridor - x23y47z2" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y48z2.c",
  "south" : DIR+"/rooms/x23y46z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
