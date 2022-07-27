inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 48, 9 }));
  set_short( "Hallway - x4y48z9" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y48z9.c",
  "east" : DIR+"/rooms/x5y48z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
