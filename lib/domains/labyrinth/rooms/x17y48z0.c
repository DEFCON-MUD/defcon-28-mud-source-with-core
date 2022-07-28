inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 0 }));
  set_short( "Hallway - x17y48z0" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y48z0.c",
  "north" : DIR+"/rooms/x17y49z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
