inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 62, 8 }));
  set_short( "Hallway - x8y62z8" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y62z8.c",
  "east" : DIR+"/rooms/x9y62z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
