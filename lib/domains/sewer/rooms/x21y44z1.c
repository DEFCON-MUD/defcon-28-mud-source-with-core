inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 1 }));
  set_short( "Hallway - x21y44z1" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y44z1.c",
  "east" : DIR+"/rooms/x22y44z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
