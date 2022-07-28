inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 2 }));
  set_short( "Hallway - x1y48z2" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "south" : DIR+"/rooms/x1y47z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
