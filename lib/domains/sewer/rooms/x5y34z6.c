inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 34, 6 }));
  set_short( "Corridor - x5y34z6" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y34z6.c",
  "north" : DIR+"/rooms/x5y35z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
