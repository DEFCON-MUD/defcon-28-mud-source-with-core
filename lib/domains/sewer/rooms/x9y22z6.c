inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 6 }));
  set_short( "Corridor - x9y22z6" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y22z6.c",
  "north" : DIR+"/rooms/x9y23z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
