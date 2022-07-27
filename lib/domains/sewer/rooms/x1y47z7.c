inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 47, 7 }));
  set_short( "Hallway - x1y47z7" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y48z7.c",
  "south" : DIR+"/rooms/x1y46z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
