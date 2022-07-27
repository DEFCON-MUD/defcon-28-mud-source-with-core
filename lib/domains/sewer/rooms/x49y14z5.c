inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 14, 5 }));
  set_short( "Hallway - x49y14z5" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "south" : DIR+"/rooms/x49y13z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
