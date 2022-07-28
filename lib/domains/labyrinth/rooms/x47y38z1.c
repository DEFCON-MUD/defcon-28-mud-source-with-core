inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 1 }));
  set_short( "Hallway - x47y38z1" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y38z1.c",
  "north" : DIR+"/rooms/x47y39z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
