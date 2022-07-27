inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 8 }));
  set_short( "Passage - x49y22z8" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z8.c",
  "north" : DIR+"/rooms/x49y23z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
