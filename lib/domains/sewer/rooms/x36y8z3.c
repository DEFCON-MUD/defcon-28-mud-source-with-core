inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 8, 3 }));
  set_short( "Hallway - x36y8z3" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y8z3.c",
  "east" : DIR+"/rooms/x37y8z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
