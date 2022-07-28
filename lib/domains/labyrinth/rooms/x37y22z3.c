inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 22, 3 }));
  set_short( "Corridor - x37y22z3" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y23z3.c",
  "south" : DIR+"/rooms/x37y21z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
