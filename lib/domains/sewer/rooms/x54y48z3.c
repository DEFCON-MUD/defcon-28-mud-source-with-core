inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 48, 3 }));
  set_short( "Corridor - x54y48z3" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y48z3.c",
  "east" : DIR+"/rooms/x55y48z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
