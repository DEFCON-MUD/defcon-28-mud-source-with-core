inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 23, 6 }));
  set_short( "Corridor - x17y23z6" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y24z6.c",
  "south" : DIR+"/rooms/x17y22z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
