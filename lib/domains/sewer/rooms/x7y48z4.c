inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 48, 4 }));
  set_short( "Hallway - x7y48z4" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y48z4.c",
  "east" : DIR+"/rooms/x8y48z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
